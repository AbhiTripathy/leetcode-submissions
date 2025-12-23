# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: Optional[ListNode]
        :type l2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        l1_ptr = l1
        l2_ptr = l2
        sum1 = 0
        sum2 = 0
        final_sum = 0
        i = 0

        while l1_ptr != None:
            sum1 += (l1_ptr.val)*(10**i)
            i += 1
            l1_ptr = l1_ptr.next
        i = 0
        while l2_ptr != None:
            sum2 += (l2_ptr.val)*(10**i)
            i += 1
            l2_ptr = l2_ptr.next

        final_sum = sum1 + sum2
        sum_LN = ListNode(final_sum % 10)
        final_sum = final_sum // 10
        temp = sum_LN

        while final_sum != 0:
            temp.next = ListNode(final_sum % 10)
            temp = temp.next
            final_sum = final_sum // 10
        return sum_LN

        
