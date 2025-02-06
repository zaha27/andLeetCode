var findMedianSortedArrays = function(nums1, nums2) {
    class MedianFinder {
        constructor() {
            this.maxHeap = [];
            this.minHeap = [];
        }

        addNum(num) {
            if (this.maxHeap.length === 0 || num <= -this.maxHeap[0]) {
                this.maxHeap.push(-num);
                this.heapifyUp(this.maxHeap);
            } else {
                this.minHeap.push(num);
                this.heapifyUp(this.minHeap);
            }

            if (this.maxHeap.length > this.minHeap.length + 1) {
                this.minHeap.push(-this.maxHeap.shift());
                this.heapifyUp(this.minHeap);
                this.heapifyDown(this.maxHeap);
            } else if (this.minHeap.length > this.maxHeap.length) {
                this.maxHeap.push(-this.minHeap.shift());
                this.heapifyUp(this.maxHeap);
                this.heapifyDown(this.minHeap);
            }
        }

        findMedian() {
            if (this.maxHeap.length > this.minHeap.length) {
                return -this.maxHeap[0];
            }
            return (-this.maxHeap[0] + this.minHeap[0]) / 2;
        }

        heapifyUp(heap) {
            let idx = heap.length - 1;
            while (idx > 0) {
                let parentIdx = Math.floor((idx - 1) / 2);
                if (heap[idx] > heap[parentIdx]) break;
                [heap[idx], heap[parentIdx]] = [heap[parentIdx], heap[idx]];
                idx = parentIdx;
            }
        }

        heapifyDown(heap) {
            let idx = 0;
            const length = heap.length;
            while (2 * idx + 1 < length) {
                let leftChildIdx = 2 * idx + 1;
                let rightChildIdx = 2 * idx + 2;
                let smallerChildIdx = leftChildIdx;

                if (rightChildIdx < length && heap[rightChildIdx] < heap[leftChildIdx]) {
                    smallerChildIdx = rightChildIdx;
                }

                if (heap[idx] <= heap[smallerChildIdx]) break;
                [heap[idx], heap[smallerChildIdx]] = [heap[smallerChildIdx], heap[idx]];
                idx = smallerChildIdx;
            }
        }
    };

    const finder = new MedianFinder();

    for (let num of nums1) {
        finder.addNum(num);
    }
    for (let num of nums2) {
        finder.addNum(num);
    }

    return finder.findMedian();
};