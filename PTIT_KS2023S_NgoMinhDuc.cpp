#include <stdio.h>
#include <string.h>
struct Contact {
	int id;
	char name[50];
	char phone[12];
	char address[50];
	int status; 
}; 
void printContact(struct Contact contact) {
	printf("ID: %d\n", contact.id);
    printf("Name: %s\n", contact.name);
    printf("Phone: %s\n", contact.phone);
    printf("Address: %s\n", contact.address);
    printf("Status: %d\n", contact.status);
    printf("---------------------------------\n");
}
int main(){
	int choice; 
	int length;
	int i;  
	do {
		printf("1. In to�n bo danh s�ch contact c� o trong mang contactList tr�n c�ng mot h�ng\n");
		printf("2. Thuc hien chuc nang th�m moi contact v�o vi tr� cuoi c�ng cua contactList, Th�ng tin contact do nguoi d�ng nhap v�o\n");
		printf("3. Thuc hien chuc n�ng cap nhat th�ng tin cua mot contact. Cho nguoi d�ng nhap v�o t�n contact muon chinh sua, neu tim thay thi cho nguoi d�ng tien h�nh nhap v�o th�ng tin moi cho contact do. Neu kh�ng tim thay thi in ra m�n hinh (Kh�ng tim thay)\n");
		printf("4. Thuc hien chuc n�ng x�a mot contact. Cho nguoi d�ng nhap v�o t�n contact muon xo�, neu tim thay thi cho nguoi d�ng tien h�nh x�a contact d� di. Neu kh�ng tim thay thi in ra m�n hinh (Kh�ng tim thay)\n");
		printf("5. Thuc hien chuc n�ng sap xep (Su dung thuat to�n sap xep noi bot) v� in ra danh s�ch contact da duoc sap xep\n");
		printf("6. Thuc hien chuc nang tim kiem (Su dung thuat to�n tim kiem nhi ph�n) v� in ra th�ng tin cua contact tr�n c�ng mot h�ng (Tim kiem theo t�n contact)\n");
		printf("7. Thuc hien chuc nang tim kiem (Su dung thuat to�n tim kiem tuyen t�nh) v� in ra to�n bo th�ng tin contact (Tim kiem theo status)\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &choice);
		switch (choice) {
			case 1: 
					struct Contact contactList[i];
    				printf("Contact List:\n");
    				for (int i = 0; i < length; i++) {
       				printContact(contactList[i]);	
    				}
				
				break;
			case2:
				
			    struct Contact newContact;
			    printf("Enter ID: ");
			    scanf("%d", &newContact.id);
			    printf("Enter Name: ");
			    scanf(" %[^\n]s", newContact.name);
			    printf("Enter Phone: ");
			    scanf(" %[^\n]s", newContact.phone);
			    printf("Enter Address: ");
			    scanf(" %[^\n]s", newContact.address);
			    printf("Enter Status: ");
			    scanf("%d", &newContact.status);
			    int *length; 
			    contactList[*length] = newContact;
			    (*length)++;
				break;
			case3:
				
    			char name[50];
    
    			printf("Nhap t�n li�n he ban muon cap nhat: ");
    			scanf(" %[^\n]s", name);
    
    			int found = 0;
    			for (int i = 0;i<length;i++) {
        			if (strcmp(name, contactList[i].name) == 0) {
            			printf("Enter new ID: ");
            			scanf("%d", &contactList[i].id);
            			printf("Enter new Name: ");
			            scanf(" %[^\n]s", contactList[i].name);
			            printf("Enter new Phone: ");
			            scanf(" %[^\n]s", contactList[i].phone);
			            printf("Enter new Address: ");
			            scanf(" %[^\n]s", contactList[i].address);
			            printf("Enter new Status: ");
			            scanf("%d", &contactList[i].status);
            
            			found = 1;
            			break;
        			}
    			}
				if (!found) {
        			printf("Kh�ng tim thay li�n he.\n");
    			} 
    		case5:
    			
    				for (int i = 0; i < length - 1; i++) {
        				for (int j = 0; j < length - i - 1; j++) {
            				if (strcmp(contactList[j].name, contactList[j + 1].name) > 0) {
                				struct Contact temp = contactList[j];
                				contactList[j] = contactList[j + 1];
                				contactList[j + 1] = temp;
            				}
        				}
    				}
				
    		
		} 
	} while (choice != 7); 
} 
