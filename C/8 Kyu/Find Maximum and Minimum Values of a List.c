int min(int* array, int arrayLength)
{
    int min = array[0];
    
    for(int i = 0; i < arrayLength; ++i)
        if(array[i] < min)
            min =  array[i];
            
    return min;
}

int max(int* array, int arrayLength)
{
    int max = array[0];
    
    for(int i = 0; i < arrayLength; ++i)
        if(array[i] > max)
            max =  array[i];
            
    return max;
}
