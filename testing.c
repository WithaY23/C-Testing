int aaa[] = {1,2,3};
int ccc[] = {1,2,3,4,5};
int *b[] = {aaa,aaa,aaa, ccc};

void replace(int i[])
{
    b[0] = i;
}