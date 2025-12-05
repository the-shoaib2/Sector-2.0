#include <stdio.h>
#include <string.h>

int main() {
    char packet[200];
    scanf("%s", packet);
    int len = strlen(packet);
    int suspicious = 0;
    
    for (int i = 0; i <= len - 6; i++) {
        if (packet[i] == '1' && (packet[i+1] == '0' || packet[i+1] == '1') && 
            packet[i+2] == '0' && packet[i+3] == '1' && 
            packet[i+4] == '0' && packet[i+5] == '0') {
            
            int allOnes = 1;
            for (int j = i + 6; j < len; j++) {
                if (packet[j] != '1') {
                    allOnes = 0;
                    break;
                }
            }
            if (allOnes) {
                suspicious = 1;
                break;
            }
        }
    }

    if (suspicious) {
        printf("Suspicious packet\n");
    } else {
        printf("Normal packet\n");
    }
    return 0;
}
