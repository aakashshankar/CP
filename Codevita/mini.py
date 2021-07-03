import math
import heapq

def heapreplace_max(heap, item):
    returnitem = heap[0]
    heap[0] = item
    heapq._siftup_max(heap, 0)
    return returnitem

def minSum(num, k):
    heap = num
    heapq._heapify_max(heap)

    for i in range(k):
        max_value = heap[0]
        if max_value == 1:
            break
        new_val = (max_value >> 1)
        heapreplace_max(heap, new_val)

    print(sum(heap))

l = input().split()
n = int(l[0])
k = int(l[1])
num = list(map(int, input().strip().split()))

minSum(num,k)
