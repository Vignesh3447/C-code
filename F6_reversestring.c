 #include <stdio.h>
 #include <string.h>
 
 void reverseSentence(char *sentence, int index) {
 if (index < 0) {
 return; 
 }
 printf("%c", sentence[index]); 
 reverseSentence(sentence, index- 1); 
 }
 int main() {
 char sentence[100];

 printf("Enter a sentence: ");
 fgets(sentence, sizeof(sentence), stdin);
 
 sentence[strcspn(sentence, "\n")] = '\0';
 printf("Reversed sentence: ");
 reverseSentence(sentence, strlen(sentence)- 1); 
 printf("\n");
 return 0;
 }
 