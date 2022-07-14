it
	while (s[a])
	{
		i = 0;

		while (i < lim)
		{
			if ((a == 0 || s[a - 1] == sept[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

			i++;
		}

		a++;
	}

	return (s);
}
