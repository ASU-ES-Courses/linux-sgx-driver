#include <linux/module.h>
#include <linux/kernel.h>


void print_encl_stats(struct sgx_encl *encl) {

  printk("\n\n\n******************** Enclave # %u ********************\nTotal Paged: %u \nTotal Loaded: %u \nTotal Evicted: %u \n*****************************************************\n\n\n", 
	       encl->enclave_number,
         encl->epc_total_paged,
	       encl->epc_total_loaded,
	       encl->epc_total_evicted);
         
}
