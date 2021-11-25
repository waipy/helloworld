//for(i=0;i<max_length;) if(input_line[i] == '?') quest_count++;
void exec6(){
    int i=0,quest_count=0;
    int max_length = 100;
    char input_line[] = "I old are you?";
    while(i<max_length){
        if(input_line[i] == '?')
            quest_count++;
    }
}