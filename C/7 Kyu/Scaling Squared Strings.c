char* scale(char* strg, int k, int v) {
    int n = 0;
    while (strg[n]!='\n') {n++;}
    char *res = (char *)malloc((n*k+1)*(n*v)+1);
    int counter = 0;
    for (int i = 0; i < n;i++) {
        for (int j = 0; j < v; j++) {
            for (int l = 0; l < n; l++) {
                for (int m = 0; m < k; m++) {
                    res[counter]=strg[i*(n+1)+l];
                    counter++;
                }
            }
            res[counter]='\n';
            counter++;
        }
    }
    res[counter-1]='\0';
    return res;
}
