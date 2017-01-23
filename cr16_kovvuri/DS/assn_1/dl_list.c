/***********  DOUBLY LINKED LIST ******************/
# include <stdio.h>
# include <stdlib.h>

void ins_pos (int);
void display ();
int search (int);
void del_pos (int pos);
struct node {
	int data;
	struct node *r_link;
	struct node *l_link;
};

struct node* start = NULL;
struct node* temp = NULL;
struct node* p = NULL;

int count;
int n;

int main ()
{
	int ch;
	int pos;
	char m = 'y';
	while (m == 'y') {
		system ("clear");
		printf ("\n   OPERATIONS TO BE PERFORMED ON DLL");
		printf ("\n  1.INSERT\n  2.DELETE\nDo you want to insert or delete? :");
		scanf ("%d", &ch);

		if (ch == 1) {
			m = 'y';
			while (m == 'y') {
				system("clear");
				printf ("\n\t       MENU INSERT DLL           \n"
						"\n\t1. Insert at the beginning"
						"\n\t2. Insert at the end"
						"\n\t3. Insert at a given position "
						"\n\t4. Insert before a given position"
						"\n\t5. Insert after a given position"
						"\n\t6. Insert before a given number"
						"\n\t7. Insert after a given number"
						"\n\t8. Insert at the middle"
						"\n\t9. Insert at penultimate node.");
				display();
				printf ("\nEnter the option:");
				scanf ("%d", &ch);
				switch (ch) {
					case 1: 
						ins_pos(1); // insert element at begining of linked list
						break;
					case 2:
						ins_pos(count + 1); // insert element at end.
						break;
					case 3:
						printf ("\nEnter the position you want to insert");
						scanf ("%d",&pos);
						ins_pos (pos); //insert element at postion required
						break;
					case 4:
						printf ("\nEnter the position before which you"
								" want to insert");
						scanf ("%d", &pos);
						ins_pos (pos - 1);
						break;
					case 5: 
						printf ("\nEnter the position after which you want to insert");
						scanf ("%d", &pos);
						ins_pos (pos + 1);
						break;
					case 6:
						printf ("enter number before which you want to insert");
						scanf ("%d", &pos);
						(pos = search (pos))? ins_pos (pos): printf (".");
						break;
					case 7:
						printf ("enter number after which you want to insert");
						scanf ("%d", &pos);
						(pos = search (pos))? ins_pos (pos + 1) :printf (".") ;
						break;
					case 8:
						ins_pos ( (count + 1) / 2);
						break;
					case 9:
						ins_pos (count);
						break;
					default :
						printf ("\ninvalid option");

				}
				m = 'o';
				while (1) {
					printf ("\nDo you want to insert another element(y/n)?:");
					scanf (" %c", &m);
					if (m == 'y' || m == 'n') {
						break;
					}
				}

			}
		} else if (ch == 2) {
			m = 'y';
			while (m == 'y') {
				system ("clear");
				ch = 0;
				printf ("\n\t       MENU DELETE DLL       \n"
						"\n\t1. DELETE at the beginning"
						"\n\t2. DELETE at the end"
						"\n\t3. DELETE at a given position "
						"\n\t4. DELETE before a given position"
						"\n\t5. DELETE after a given position"
						"\n\t6. DELETE before a given number"
						"\n\t7. DELETE after a given number"
						"\n\t8. DELETE at the middle"
						"\n\t9. DELETE at penultimate node.");
				display();
				printf("cont= %d", count);
				printf ("\nEnter the option:");
				scanf ("%d", &ch);
				switch (ch) {
					case 1: 
						printf ("%d",count);
						del_pos(1); // insert element at begining of linked list
						break;
					case 2:
						del_pos (count); // insert element at end.
						break;
					case 3:
						printf ("\nEnter the position you want to Delete");
						scanf ("%d",&pos);
						del_pos (pos); //insert element at postion required
						break;
					case 4:
						printf ("\nEnter the position before which you"
								" want to delete");
						scanf ("%d", &pos);
						del_pos (pos - 1);
						break;
					case 5: 
						printf ("\nEnter the position after which you"
								" want to delete");
						scanf ("%d", &pos);
						del_pos (pos + 1);
						break;
					case 6:
						printf ("enter number before which you want to delete");
						scanf ("%d", &pos);
						pos = search (pos);
						if (pos) {
							pos = pos - 1;
							del_pos (pos);
						}
						break;
					case 7:
						printf ("enter number after which you want to delete");
						scanf ("%d", &pos);
						pos = search (pos);
						if (pos) {
							pos++;
							del_pos (pos);
						}
						break;
					case 8:
						del_pos ((count + 1) / 2);
						break;
					case 9:
						del_pos (count - 1);
						break;
					default :
						printf ("\ninvalid option");

				}
				display ();
				m = 'o';
				while (1) {
					printf ("\nDo you want to Delete another element(y/n)?:");
					scanf (" %c", &m);
					if (m == 'y' || m == 'n') {
						break;
					} 
				}

			}

		} else {
			printf ("\nINVALID option enter 1 or 2");
		}
		m = 'o';
		while (1) {
			printf ("\nDo you want to perform another operation(y/n)?:");
			scanf (" %c", &m);
			if (m == 'y' || m == 'n') {
				break;
			}
		}

	}
	return 0;
}

void ins_pos (int pos)
{
	int i;

	p = start;
	if (pos <= 0 || (pos > (count + 1))) {
		printf ("\nElement can't be inserted due to invalid postion");
	} else if (pos == 1) {
		temp = (struct node*) malloc (sizeof (struct node));
		printf ("\nEnter the number you want to insert :");
		scanf ("%d",&temp -> data);
		temp -> l_link = NULL;
		temp -> r_link = p;
		if (p != NULL) {
			p -> l_link = temp;
		}
		start = temp;
		temp = NULL;
		free ( temp );
		count ++;
	} else {
		for (i = 2; i < pos ; i++) {
			p = p -> r_link;
		}
		temp = (struct node*) malloc (sizeof (struct node));
		printf ("\nEnter the number you want to insert :");
		scanf ("%d", &temp -> data);
		temp -> r_link = p -> r_link;
		temp -> l_link = p;
		if (p -> r_link)
			p -> r_link -> l_link = temp;
		p -> r_link = temp;
		temp = NULL;
		free(temp);
		count ++;
	}
}

void display ()
{
	if (count == 0) {
		printf ("\nLINKED LIST IS EMPTY");
	} else {
		printf ("\nDouble linked list elemtns are:\n");
		for (p = start; p -> r_link ; p = p -> r_link) {
			printf ("%d <--> ", p -> data);
		}
		printf ("%d", p -> data);
	}
}

int search( int num )
{
	int i = 1;

	if (count == 0) {
		printf ("\nlist is empty to search");
	} else {
		for (p = start ; p && (p -> data != num); p = p -> r_link, i++);
		if (!p) {
			printf ("\nNumber not found");
		 	return 0; 
		} else {
			return i;
		}
	}
	return 0;
}

void del_pos (int pos)
{
	int i;

	printf ("%d\t%d",count, pos);
	if (count == 0) {
		printf ("\nList is empty to delete");
		return;
	} else if (pos <= 0 || pos > count) {
		printf ("\nInvalid Position to delete");
		return;
	} else if (1 == pos) {
		temp = start;
		if (count != 1) {	
	 		start = start -> r_link;
			start -> l_link = NULL;
		} else if( count == 1) {
			free(start);
			start = NULL;
		}
		//free( temp );
		count --;
		return;
	} else {
		p = start;
		for (i = 1; i < pos ; i++) {
			p = p -> r_link;
		}
		if (p -> r_link)
		p -> r_link -> l_link = p -> l_link;
		p -> l_link -> r_link = p -> r_link;
		free (p);
		p = NULL;
		count --; 
	}
}
