/**********************************************************************/
/*                                                                    */
/* Program Name: AddressBook -  Structured contact storage            */
/* Author:       Jacob North                                          */   
/* Date Started: August 22nd 2020                                     */
/*                                                                    */
/**********************************************************************/

/**********************************************************************/
/* Symbolic Constants                                                 */
/**********************************************************************/
#define QUIT   0 /* Program exit code */

/**********************************************************************/
/* Structures                                                         */
/**********************************************************************/
struct contact_record {
    struct contact_record *p_next_contact;
    int contact_id;
}; typedef struct contact_record CONTACT_RECORD;

/**********************************************************************/
/* Main Function                                                      */
/**********************************************************************/
int main() {

    CONTACT_RECORD *p_contact_list; /* Linked list of contact records */
    int temp_contact_id;            /* Unsorted contact id            */

    return QUIT;
}