/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm-v03.01.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -no-gen-OER -D /tmp/workspace/oransim-gerrit/e2sim/asn1c/`
 */

#ifndef	_GlobalNGRANNodeID_H_
#define	_GlobalNGRANNodeID_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GlobalNGRANNodeID_PR {
	GlobalNGRANNodeID_PR_NOTHING,	/* No components present */
	GlobalNGRANNodeID_PR_gNB,
	GlobalNGRANNodeID_PR_ng_eNB
	/* Extensions may appear below */
	
} GlobalNGRANNodeID_PR;

/* Forward declarations */
struct GlobalGNB_ID;
struct GlobalNgENB_ID;

/* GlobalNGRANNodeID */
typedef struct GlobalNGRANNodeID {
	GlobalNGRANNodeID_PR present;
	union GlobalNGRANNodeID_u {
		struct GlobalGNB_ID	*gNB;
		struct GlobalNgENB_ID	*ng_eNB;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GlobalNGRANNodeID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GlobalNGRANNodeID;
extern asn_CHOICE_specifics_t asn_SPC_GlobalNGRANNodeID_specs_1;
extern asn_TYPE_member_t asn_MBR_GlobalNGRANNodeID_1[2];
extern asn_per_constraints_t asn_PER_type_GlobalNGRANNodeID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _GlobalNGRANNodeID_H_ */
#include "asn_internal.h"
