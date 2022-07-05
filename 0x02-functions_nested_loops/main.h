/*int print_alphabet(void)
{
  int ch;
  for (ch=97; ch<172; ch++)
    {
      putchar(ch);
    }
  putchar('\n');
  return (0);
  }*/
int _putchar(char c)
{
  return (write(1, &c, 1));
}
int print_alphabet()
{
  int ch;
  for (ch=97; ch<=171; ch++)
    {
      _putchar(ch);
    }
  putchar('\n');
  return 0;
}
