#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	//next e o ponteiro para o dado data
	struct node *next;
};
void read_graph(struct node *ad[],int n_of_nodes);
struct node *print_graph(struct node *ad[], int n_of_nodes);

int main(){
int i,j,k,nodes;
	//numero de Nos aue irao compor o vetor
	printf("Number of nodes ");
	scanf("%d\n",&nodes);
	//declaeando o adj do tipo struct
	struct node *adj[nodes];
	//itera o vetor adj inicializando com valor null
	for(i=0;i<nodes;i++)
	{
		adj[i]=NULL;
		read_graph(adj,nodes);
		print_graph(adj,nodes);
		
	}
return 0;	
}
//funcao para leitura dos elementos de grafo
//recebe o vetor  contendo os dados e o numero dos nos
void read_graph(struct node *ad[],int n_of_nodes){
	
	struct node *new_node;
	int i,j,k,val;
	for(i=0;i<n_of_nodes;i++)
	{
		struct node *last=NULL;
		//pede a insercao do numero de v8zinhos
		printf("Number of neighbours\n");
		scanf("%d",&k);
		for(j=0;j<k;j++)
		{
			//valor de cada vizinho
		printf("Neighbours values %d ",i+1);
			scanf("%d",&val);
			//alocando memoria do tamanho da struct para a variavel new node
			new_node=(struct node *)malloc(sizeof(struct node *));
			//new node ->data recebe o valor da variavel val
			new_node->data=val;
			//new_node recebe proximo e aponta para null
			new_node->next=NULL;
			if(ad[i]==NULL)
			{
				ad[i]=new_node;
			}
			else
			{
				last->next=new_node;
			}
			last=new_node;
		}
	}
}

struct node *print_graph(struct node *ad[], int n_of_nodes){
	
	struct node *ptr=NULL;
	int i,j;
	for(i=0;i<n_of_nodes;i++)
	{
		ptr=ad[i];
		printf("Neighbours %d",i+1);
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}
	}
}