#include <stdio.h>

void main()
{
    // Declare variables
    int capacity, no_items, cur_weight, item;
    int used[10];
    float total_profit;
    int i;
    int weight[10];
    int value[10];

    // Prompt user for knapsack capacity and number of items
    printf("Enter the capacity of knapsack:\n");
    scanf("%d", &capacity);

    printf("Enter the number of items:\n");
    scanf("%d", &no_items);

    // Prompt user for weight and value of each item
    printf("Enter the weight and value of %d item:\n", no_items);
    for (i = 0; i < no_items; i++)
    {
        printf("Weight[%d]:\t", i);
        scanf("%d", &weight[i]);
        printf("Value[%d]:\t", i);
        scanf("%d", &value[i]);
    }

    // Initialize all items to unused
    for (i = 0; i < no_items; ++i)
        used[i] = 0;

    // Start filling knapsack with items
    cur_weight = capacity;
    while (cur_weight > 0)
    {
        // Find the item with the highest value-to-weight ratio that has not been used
        item = -1;
        for (i = 0; i < no_items; ++i)
            if ((used[i] == 0) &&
                ((item == -1) || ((float) value[i] / weight[i] > (float) value[item] / weight[item])))
                item = i;

        // Add item to knapsack
        used[item] = 1;
        cur_weight -= weight[item];
        total_profit += value[item];

        // Print message about item added to knapsack
        if (cur_weight >= 0)
            printf("Added object %d (%d Rs., %dKg) completely in the bag. Space left: %d.\n", item + 1, value[item], weight[item], cur_weight);
        else
        {
            int item_percent = (int) ((1 + (float) cur_weight / weight[item]) * 100);
            printf("Added %d%% (%d Rs., %dKg) of object %d in the bag.\n", item_percent, value[item], weight[item], item + 1);

            // Adjust profit to account for fractional item added to knapsack
            total_profit -= value[item];
            total_profit += (1 + (float)cur_weight / weight[item]) * value[item];
        }
    }

    // Print final message with total profit of knapsack
    printf("Filled the bag with objects worth %.2f Rs.\n", total_profit);
}
