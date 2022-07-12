void rev_string(char *s)
{
ar *start;
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
