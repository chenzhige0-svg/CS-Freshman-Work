#include <stdio.h>
#include <stdlib.h>

// 任务结构体
typedef struct TaskNode {
    int id;                 // 任务ID
    int priority;           // 优先级（数值越大，越靠前）
    struct TaskNode *next;  // 指向下一个任务
} TaskNode;

/**
 * @brief  向有序链表中插入一个新任务
 * @param  head_ref: 指向头指针的指针（这是个二级指针！因为头指针本身可能会变）
 * @param  new_id:   新任务ID
 * @param  new_prio: 新任务优先级
 */
void insert_task(TaskNode **head_ref, int new_id, int new_prio) {
    // 1. 在堆上分配新节点内存 (malloc)
    // 2. 初始化新节点
    // 3. 找到正确的插入位置
    //    情况A: 链表为空，或新任务优先级比头节点还高 -> 换头
    //    情况B: 遍历链表，找到一个节点，其优先级 >= 新任务，但其next的优先级 < 新任务
    
    // === 请在此处编写你的代码 ===
    





    // ==========================
}

// 辅助打印函数（用于你自己测试）
void print_list(TaskNode *head) {
    TaskNode *current = head;
    while (current != NULL) {
        printf("[ID:%d Prio:%d] -> ", current->id, current->priority);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    TaskNode *head = NULL; // 初始链表为空

    // 模拟插入过程
    insert_task(&head, 1, 10); // 插入 ID:1, 优先级:10
    insert_task(&head, 2, 5);  // 插入 ID:2, 优先级:5
    insert_task(&head, 3, 20); // 插入 ID:3, 优先级:20 (最高，应该在最前)
    insert_task(&head, 4, 10); // 插入 ID:4, 优先级:10 (与ID:1相同，应排在ID:1之后)

    // 预期输出: [ID:3 Prio:20] -> [ID:1 Prio:10] -> [ID:4 Prio:10] -> [ID:2 Prio:5] -> NULL
    print_list(head);

    return 0;
}







