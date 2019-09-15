int i=1;
void print(int n){
    if(i<=n){
        /*if(n == 1){
            cout << n << " ";
        }
        */
        cout << i << " ";
        i++;
        print(n);
    }
}