

int main()
{
  int i = 10;
  ++i;
  register static int *a = &i;
  printf("%d", *a);

  return 0;
}
