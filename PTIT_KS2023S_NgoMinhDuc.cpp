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
		printf("1. In toàn bo danh sách contact có o trong mang contactList trên cùng mot hàng\n");
		printf("2. Thuc hien chuc nang thêm moi contact vào vi trí cuoi cùng cua contactList, Thông tin contact do nguoi dùng nhap vào\n");
		printf("3. Thuc hien chuc nãng cap nhat thông tin cua mot contact. Cho nguoi dùng nhap vào tên contact muon chinh sua, neu tim thay thi cho nguoi dùng tien hành nhap vào thông tin moi cho contact do. Neu không tim thay thi in ra màn hinh (Không tim thay)\n");
		printf("4. Thuc hien chuc nãng xóa mot contact. Cho nguoi dùng nhap vào tên contact muon xoá, neu tim thay thi cho nguoi dùng tien hành xóa contact dó di. Neu không tim thay thi in ra màn hinh (Không tim thay)\n");
		printf("5. Thuc hien chuc nãng sap xep (Su dung thuat toán sap xep noi bot) và in ra danh sách contact da duoc sap xep\n");
		printf("6. Thuc hien chuc nang tim kiem (Su dung thuat toán tim kiem nhi phân) và in ra thông tin cua contact trên cùng mot hàng (Tim kiem theo tên contact)\n");
		printf("7. Thuc hien chuc nang tim kiem (Su dung thuat toán tim kiem tuyen tính) và in ra toàn bo thông tin contact (Tim kiem theo status)\n");
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
    
    			printf("Nhap tên liên he ban muon cap nhat: ");
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
        			printf("Không tim thay liên he.\n");
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
