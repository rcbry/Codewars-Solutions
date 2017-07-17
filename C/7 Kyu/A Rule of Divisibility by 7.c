int* seven(long long m){
    static int res[2] = {};
    int cnt = 0;
    while (m > 99) {
        long long a0 = m % 10;
        m = (m - a0) / 10 - 2 * a0;
        cnt++;
    }
    res[0] = (int) m;
    res[1] = cnt;
    return res;
}
