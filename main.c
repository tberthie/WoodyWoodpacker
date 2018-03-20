int		main(void)
{
	char	*msg = strdup("hello world");
	char	*cry = strdup("           ");
	char	*key = strdup("abc");
	int	i;
	int	len;

	len = strlen(msg);
	i = 0;
	while (i < len)
	{
		cry[i] = (msg[i] + key[i % strlen(key)]) % 256;
		i++;
	}
	printf("%x\n", cry);
	i = 0;
	while (i < len)
	{
		cry[i] = (cry[i] - key[i % strlen(key)]) % 256;
		i++;
	}
	printf("%s\n", cry);
}
