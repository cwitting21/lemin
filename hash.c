#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define SIZE 20

typedef struct	s_hash
{
	int			data;
	int			key;
}				t_hash;

int			hash_code(int key)
{
	return (key % SIZE);
}

t_hash		*search(t_hash **arr, int key)
{
	int		i;

	i = hash_code(key);
	while (arr[i])
	{
		if (arr[i]->key == key)
			return (arr[i]);
		++i;
		i %= SIZE;
	}
	return (NULL);
}

void		display(t_hash **arr)
{
	int		i;

	for (i = 0; i < SIZE; i++)
	{
		printf("i = %d  ", i);
		if (arr[i])
			printf(" (%d ... %d) \n", arr[i]->key, arr[i]->data);
		else
			printf("-----\n");
	}
	printf("\n");
}

void		insert(t_hash **arr, int key, int data)
{
	t_hash	*item;
	int		i;
	int		count = 0;

	item = (t_hash*)malloc(sizeof(t_hash));
	item->data = data;
	item->key = key;
	i = hash_code(key);
	while (arr[i] && arr[i]->key != -1)
	{
		++i;
		i %= SIZE;
		if (++count == SIZE - 1)
			break ;
	}
	arr[i] = item;
}

int			main(void)
{
	t_hash	*arr[SIZE];
	t_hash	*item;
	// t_hash	*dummy;

	// dummy = (t_hash*)malloc(sizeof(t_hash));
	// dummy->data = -1;
	// dummy->key = -1;
	bzero(&arr, SIZE * 8);
	// printf("arr = %d\n", array[0]);
	insert(arr, 1, 20); // array, key, data
	insert(arr, 2, 70);
	insert(arr, 42, 80);
	insert(arr, 4, 25);
	insert(arr, 12, 44);
	insert(arr, 14, 32);
	insert(arr, 15, 31);
	insert(arr, 16, 33);
	insert(arr, 17, 34);
	insert(arr, 18, 35);
	insert(arr, 19, 36);
	insert(arr, 20, 137);
	insert(arr, 21, 37);
	insert(arr, 22, 444);
	insert(arr, 23, 1);
	insert(arr, 24, 22);
	insert(arr, 425, 3);
	insert(arr, 326, 4);
	insert(arr, 227, 5);
	insert(arr, 128, 6);
	// insert(arr, 425, 7);
	display(arr);
	item = search(arr, 425); // search by key
	if (item)
		printf("Found element: %d\n", item->data);
	else
		printf("No such element\n");
	return (0);
}