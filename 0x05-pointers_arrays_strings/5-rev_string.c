void rev_string(char *s)
{
char *start;
start = s;
while (*s)
{
s++;
}
s--;
while (start <= s)
{

--s;
}

}
