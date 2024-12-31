/*
 * Copyright 2019 AT&T Intellectual Property
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * This source code is part of the near-RT RIC (RAN Intelligent Controller)
 * platform project (RICP).
 */



/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asnFiles/X2AP-IEs.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_GU_Group_ID_H_
#define	_GU_Group_ID_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PLMN-Identity.h"
#include "MME-Group-ID.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* GU-Group-ID */
typedef struct GU_Group_ID {
	PLMN_Identity_t	 pLMN_Identity;
	MME_Group_ID_t	 mME_Group_ID;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GU_Group_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GU_Group_ID;
extern asn_SEQUENCE_specifics_t asn_SPC_GU_Group_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_GU_Group_ID_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _GU_Group_ID_H_ */
#include "asn_internal.h"
