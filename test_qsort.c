#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
  int a;
  int b;
  int c;
}TEST;

int comp( const void *c1, const void *c2 );

int main(void)
{
  int i;
  TEST base[10];

  /* 乱数の生成 */
  srand( (unsigned int)time( NULL ) );

  for( i=0; i<10; i++ ){
    base[i].a = rand() % 100;   /* 0～99の乱数 */
    base[i].b = rand() % 100;
    base[i].c = rand() % 100;
    printf( "%d\t", base[i].a );
    printf( "%d\t", base[i].b );
    printf( "%d\t", base[i].c );
    printf( "\n" );
  }

  /* TEST構造体のbを基準にソート */
  printf( "\n--TEST構造体のbを基準にソート--\n\n" );
  qsort( base, 10, sizeof(TEST), comp );

  /* ソート後のデータを表示 */
  for( i=0; i<10; i++ ){
    printf( "%d\t", base[i].a );
    printf( "%d\t", base[i].b );
    printf( "%d\t", base[i].c );
    printf( "\n" );
  }

  return 0;
}

/* 比較関数 */
int comp( const void *c1, const void *c2 )
{
  TEST test1 = *(TEST *)c1;
  TEST test2 = *(TEST *)c2;

  int tmp1 = test1.b;   /* b を基準とする */
  int tmp2 = test2.b;

  return tmp1 - tmp2;
}
