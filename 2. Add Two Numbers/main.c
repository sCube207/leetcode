#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2);
struct ListNode *createList(int val);

int main() { 
    struct ListNode *l1, *l2, *ans;

    l1 = NULL;
    l2 = NULL;
    ans = NULL;

    l1 = createList(2);
    l1->next = createList(4);
    l1->next->next = createList(3);
    l2 = createList(5);
    l2->next = createList(6);
    l2->next->next = createList(4);
    
    ans = addTwoNumbers(l1, l2);
    while (ans != NULL) {
        printf("%d ", ans->val);
        ans = ans->next;
    }
}

struct ListNode *createList(int val) {
    struct ListNode *p = (struct ListNode *)malloc(sizeof(struct ListNode));

    p->val = val;
    p->next = NULL;
    return p;
}

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
    struct ListNode *resultHead = NULL;
    struct ListNode *resultTail = NULL;
    int carry = 0;
    int sum = 0;

    while (l1 != NULL || l2 != NULL) {
        sum = carry;
        if (l1 != NULL) { 
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }
        carry = sum > 9 ? 1 : 0;
        if (resultHead == NULL)
            resultHead = resultTail = createList(sum % 10);
        else 
            resultTail = resultTail->next = createList(sum % 10);
    }
    if (carry == 1)
        resultTail->next = createList(carry);
    return resultHead;
}






