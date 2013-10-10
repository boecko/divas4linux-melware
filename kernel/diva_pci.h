/* $Id: diva_pci.h,v 1.6 2003/01/04 15:29:45 schindler Exp $ */

#ifndef __DIVA_PCI_INTERFACE_H__
#define __DIVA_PCI_INTERFACE_H__

struct _diva_os_xdi_adapter;
void *divasa_remap_pci_bar(struct _diva_os_xdi_adapter *a,
			   unsigned long bar,
			   unsigned long area_length);
void divasa_unmap_pci_bar(void *bar);
unsigned int divasa_get_pci_irq(unsigned char bus,
				unsigned char func, void *pci_dev_handle);
unsigned long divasa_get_pci_bar(unsigned char bus,
				 unsigned char func,
				 int bar, void *pci_dev_handle);
byte diva_os_get_pci_bus(void *pci_dev_handle);
byte diva_os_get_pci_func(void *pci_dev_handle);

#endif
