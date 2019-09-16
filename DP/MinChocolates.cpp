int getMin(int *ratings, int n){
    int size = n;

    if(size==0)

        return 0;

 

    int leftToRight[n];

    int rightToLeft[n];

    int sum;

 

    leftToRight[0] = 1;

    for(int i=1;i<size;i++)

    {

        if(ratings[i]>ratings[i-1])

            leftToRight[i] = leftToRight[i-1]+1;

 

        else

            leftToRight[i] = 1;

    }

 

    sum=leftToRight[size-1];

    rightToLeft[size-1] = 1;

 

    for(int i=size-2;i>=0;i--)

    {

        if(ratings[i]>ratings[i+1])

            rightToLeft[i] = rightToLeft[i+1]+1;

 

        else

            rightToLeft[i] = 1;

 

        sum+=(leftToRight[i]>rightToLeft[i]?leftToRight[i]:rightToLeft[i]);

    }

 

    return sum;
}
