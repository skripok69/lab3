typedef struct Stack_link {
    int inf;
    struct Stack_link* link;
} Stack_link;

void push(Stack_link** top, int num);
int pop(Stack_link** top);
void read(Stack_link** top);
void sort(Stack_link** top);
void write(Stack_link** top, const char* filename);
