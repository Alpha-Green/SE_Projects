int main(){
    int a, b, total;
    printf("Please enter two numbers and press ENTER: ");
    scanf("%d%d", &a, &b);
    total = addall(a, b);
    printf("%d", total);
    getchar();
    return 0;
}

int addall(int i, int k){
   return i+k;
}

//OR THIS CAN ALSO WORK

/* int addall(int i, int k){
    int sum;
    sum = i+k;
    return sum;
}*/
