#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5
char *kth_word_in_mth_sentence_of_nth_paragraph(char ****document, int k, int m, int n)
{
    return document[n - 1][m - 1][k - 1];
}

char **kth_sentence_in_mth_paragraph(char ****document, int k, int m)
{
    return document[m - 1][k - 1];
}

char ***kth_paragraph(char ****document, int k)
{
    return document[k - 1];
}

char **split(char *str, char delimiter)
{
    char **result = malloc(1 * sizeof(char *));
    int size = 1;
    char *temp = strtok(str, &delimiter);
    *result = temp;
    while (temp != NULL)
    {
        size++;
        result = realloc(result, size * sizeof(char *));
        temp = strtok(NULL, &delimiter);
        result[size - 1] = temp;
    }
    return result;
}
char ****get_document(char *text)
{
    char **paragraphs = split(text, '\n');
    int num_of_paragraphs = 0;
    while (paragraphs[num_of_paragraphs] != NULL)
    {
        num_of_paragraphs++;
    }
    char ****document = malloc((num_of_paragraphs + 1) * sizeof(char ***));
    document[num_of_paragraphs] = 0;
    int i = 0;
    while (paragraphs[i] != NULL)
    {
        char **sentences = split(paragraphs[i], '.');
        int num_of_sentences = 0;
        while (sentences[num_of_sentences] != NULL)
        {
            num_of_sentences++;
        }
        document[i] = malloc((num_of_sentences + 1) * sizeof(char **));
        document[i][num_of_sentences] = NULL;
        int j = 0;
        while (sentences[j] != NULL)
        {
            document[i][j] = split(sentences[j], ' ');
            j++;
        }
        i++;
    }
    return document;
}

char *get_input_text()
{
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++)
    {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char *returnDoc = (char *)malloc((strlen(doc) + 1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    return returnDoc;
}

void print_word(char *word)
{
    printf("%s", word);
}

void print_sentence(char **sentence)
{
    int word_count;
    scanf("%d", &word_count);
    for (int i = 0; i < word_count; i++)
    {
        printf("%s", sentence[i]);
        if (i != word_count - 1)
            printf(" ");
    }
}

void print_paragraph(char ***paragraph)
{
    int sentence_count;
    scanf("%d", &sentence_count);
    for (int i = 0; i < sentence_count; i++)
    {
        print_sentence(*(paragraph + i));
        printf(".");
    }
}

int main()
{
    char *text = get_input_text();
    char ****document = get_document(text);

    int q;
    scanf("%d", &q);

    while (q--)
    {
        int type;
        scanf("%d", &type);

        if (type == 3)
        {
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            char *word = kth_word_in_mth_sentence_of_nth_paragraph(document, k, m, n);
            print_word(word);
        }

        else if (type == 2)
        {
            int k, m;
            scanf("%d %d", &k, &m);
            char **sentence = kth_sentence_in_mth_paragraph(document, k, m);
            print_sentence(sentence);
        }

        else
        {
            int k;
            scanf("%d", &k);
            char ***paragraph = kth_paragraph(document, k);
            print_paragraph(paragraph);
        }
        printf("\n");
    }
}