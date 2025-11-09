// this is recursive_function
// and process is recursion
// ----------- warning -> this is infinite function -------
void function()
{
    printf("Hello from function3!\n");
    function();
}

int main()
{
    printf("Hello, World!\n");
    function();
    return 0;
}