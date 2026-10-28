#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01C52B30
// Address: 0x1c52b30 - 0x1c52cd8
void sub_01C52B30_0x1c52b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C52B30_0x1c52b30");
#endif

    switch (ctx->pc) {
        case 0x1c52b4cu: goto label_1c52b4c;
        case 0x1c52b70u: goto label_1c52b70;
        case 0x1c52b9cu: goto label_1c52b9c;
        case 0x1c52c24u: goto label_1c52c24;
        case 0x1c52c4cu: goto label_1c52c4c;
        case 0x1c52c58u: goto label_1c52c58;
        case 0x1c52c90u: goto label_1c52c90;
        case 0x1c52ca0u: goto label_1c52ca0;
        default: break;
    }

    ctx->pc = 0x1c52b30u;

    // 0x1c52b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c52b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c52b34: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1c52b34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1c52b38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c52b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c52b3c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c52b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c52b40: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1c52b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1c52b44: 0xc714108  jal         func_1C50420
    ctx->pc = 0x1C52B44u;
    SET_GPR_U32(ctx, 31, 0x1C52B4Cu);
    ctx->pc = 0x1C52B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52B44u;
    // 0x1c52b48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C50420u, 0x1C52B44u, 0x1C52B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52B4Cu;
label_1c52b4c:
    // 0x1c52b4c: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1c52b4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c52b50: 0x544f000b  bnel        $v0, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1C52B50u;
    {
        const bool branch_taken_0x1c52b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x1c52b50) {
            ctx->pc = 0x1C52B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C52B50u;
            // 0x1c52b54: 0x8e0f0004  lw          $t7, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C52B80u;
            goto label_1c52b80;
        }
    }
    ctx->pc = 0x1C52B58u;
    // 0x1c52b58: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c52b58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c52b5c: 0x3c0501c5  lui         $a1, 0x1C5
    ctx->pc = 0x1c52b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)453 << 16));
    // 0x1c52b60: 0xae0f0024  sw          $t7, 0x24($s0)
    ctx->pc = 0x1c52b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 15));
    // 0x1c52b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c52b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52b68: 0x24a54310  addiu       $a1, $a1, 0x4310
    ctx->pc = 0x1c52b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17168));
    // 0x1c52b6c: 0x0  nop
    ctx->pc = 0x1c52b6cu;
    // NOP
label_1c52b70:
    // 0x1c52b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c52b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c52b74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c52b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c52b78: 0x8714258  j           func_1C50960
    ctx->pc = 0x1C52B78u;
    ctx->pc = 0x1C52B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52B78u;
    // 0x1c52b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50960u;
    sub_01C50960_0x1c50960(rdram, ctx, runtime); return;
    ctx->pc = 0x1C52B80u;
label_1c52b80:
    // 0x1c52b80: 0x8dea002c  lw          $t2, 0x2C($t7)
    ctx->pc = 0x1c52b80u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
    // 0x1c52b84: 0x8d4b0004  lw          $t3, 0x4($t2)
    ctx->pc = 0x1c52b84u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1c52b88: 0x8d6f0000  lw          $t7, 0x0($t3)
    ctx->pc = 0x1c52b88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1c52b8c: 0x19e00011  blez        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C52B8Cu;
    {
        const bool branch_taken_0x1c52b8c = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x1C52B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52B8Cu;
        // 0x1c52b90: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52b8c) {
            ctx->pc = 0x1C52BD4u;
            goto label_1c52bd4;
        }
    }
    ctx->pc = 0x1C52B94u;
    // 0x1c52b94: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c52b94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c52b98: 0x8d4e001c  lw          $t6, 0x1C($t2)
    ctx->pc = 0x1c52b98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
label_1c52b9c:
    // 0x1c52b9c: 0xc7a00  sll         $t7, $t4, 8
    ctx->pc = 0x1c52b9cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
    // 0x1c52ba0: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1c52ba0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1c52ba4: 0x11c00007  beqz        $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C52BA4u;
    {
        const bool branch_taken_0x1c52ba4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C52BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52BA4u;
        // 0x1c52ba8: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52ba4) {
            ctx->pc = 0x1C52BC4u;
            goto label_1c52bc4;
        }
    }
    ctx->pc = 0x1C52BACu;
    // 0x1c52bac: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1c52bacu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1c52bb0: 0x55a90005  bnel        $t5, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C52BB0u;
    {
        const bool branch_taken_0x1c52bb0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 9));
        if (branch_taken_0x1c52bb0) {
            ctx->pc = 0x1C52BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C52BB0u;
            // 0x1c52bb4: 0x8d6f0000  lw          $t7, 0x0($t3) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C52BC8u;
            goto label_1c52bc8;
        }
    }
    ctx->pc = 0x1C52BB8u;
    // 0x1c52bb8: 0x8dcf0048  lw          $t7, 0x48($t6)
    ctx->pc = 0x1c52bb8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 72)));
    // 0x1c52bbc: 0xa1ed0069  sb          $t5, 0x69($t7)
    ctx->pc = 0x1c52bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 105), (uint8_t)GPR_U32(ctx, 13));
    // 0x1c52bc0: 0x8d4b0004  lw          $t3, 0x4($t2)
    ctx->pc = 0x1c52bc0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_1c52bc4:
    // 0x1c52bc4: 0x8d6f0000  lw          $t7, 0x0($t3)
    ctx->pc = 0x1c52bc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1c52bc8:
    // 0x1c52bc8: 0x18f782a  slt         $t7, $t4, $t7
    ctx->pc = 0x1c52bc8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1c52bcc: 0x55e0fff3  bnel        $t7, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C52BCCu;
    {
        const bool branch_taken_0x1c52bcc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c52bcc) {
            ctx->pc = 0x1C52BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C52BCCu;
            // 0x1c52bd0: 0x8d4e001c  lw          $t6, 0x1C($t2) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C52B9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c52b9c;
        }
    }
    ctx->pc = 0x1C52BD4u;
label_1c52bd4:
    // 0x1c52bd4: 0x3c0501c6  lui         $a1, 0x1C6
    ctx->pc = 0x1c52bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)454 << 16));
    // 0x1c52bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c52bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52bdc: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C52BDCu;
    {
        const bool branch_taken_0x1c52bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C52BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52BDCu;
        // 0x1c52be0: 0x24a595b0  addiu       $a1, $a1, -0x6A50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52bdc) {
            ctx->pc = 0x1C52B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c52b70;
        }
    }
    ctx->pc = 0x1C52BE4u;
    // 0x1c52be4: 0x0  nop
    ctx->pc = 0x1c52be4u;
    // NOP
    // 0x1c52be8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c52be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c52bec: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c52becu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c52bf0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c52bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c52bf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c52bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c52bf8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c52bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c52bfc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c52bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c52c00: 0x8c920024  lw          $s2, 0x24($a0)
    ctx->pc = 0x1c52c00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1c52c04: 0x164f002e  bne         $s2, $t7, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C52C04u;
    {
        const bool branch_taken_0x1c52c04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C52C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52C04u;
        // 0x1c52c08: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52c04) {
            ctx->pc = 0x1C52CC0u;
            goto label_1c52cc0;
        }
    }
    ctx->pc = 0x1C52C0Cu;
    // 0x1c52c0c: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x1c52c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c52c10: 0x1600001b  bnez        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C52C10u;
    {
        const bool branch_taken_0x1c52c10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c52c10) {
            ctx->pc = 0x1C52C80u;
            goto label_1c52c80;
        }
    }
    ctx->pc = 0x1C52C18u;
    // 0x1c52c18: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1c52c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c52c1c: 0xc713e74  jal         func_1C4F9D0
    ctx->pc = 0x1C52C1Cu;
    SET_GPR_U32(ctx, 31, 0x1C52C24u);
    ctx->pc = 0x1C52C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52C1Cu;
    // 0x1c52c20: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9D0u, 0x1C52C1Cu, 0x1C52C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52C24u;
label_1c52c24:
    // 0x1c52c24: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c52c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c52c28: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C52C28u;
    {
        const bool branch_taken_0x1c52c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C52C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52C28u;
        // 0x1c52c2c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52c28) {
            ctx->pc = 0x1C52C78u;
            goto label_1c52c78;
        }
    }
    ctx->pc = 0x1C52C30u;
    // 0x1c52c30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c52c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52c34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c52c34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52c38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c52c38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52c3c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c52c3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c52c40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c52c40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52c44: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C52C44u;
    SET_GPR_U32(ctx, 31, 0x1C52C4Cu);
    ctx->pc = 0x1C52C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52C44u;
    // 0x1c52c48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C52C44u, 0x1C52C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52C4Cu;
label_1c52c4c:
    // 0x1c52c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c52c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52c50: 0xc713e66  jal         func_1C4F998
    ctx->pc = 0x1C52C50u;
    SET_GPR_U32(ctx, 31, 0x1C52C58u);
    ctx->pc = 0x1C52C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52C50u;
    // 0x1c52c54: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F998u, 0x1C52C50u, 0x1C52C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52C58u;
label_1c52c58:
    // 0x1c52c58: 0xae320018  sw          $s2, 0x18($s1)
    ctx->pc = 0x1c52c58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 18));
    // 0x1c52c5c: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1c52c5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c52c60: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1c52c60u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c52c64: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1c52c64u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1c52c68: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C52C68u;
    {
        const bool branch_taken_0x1c52c68 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C52C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52C68u;
        // 0x1c52c6c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52c68) {
            ctx->pc = 0x1C52C7Cu;
            goto label_1c52c7c;
        }
    }
    ctx->pc = 0x1C52C70u;
    // 0x1c52c70: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1c52c70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c52c74: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1c52c74u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1c52c78:
    // 0x1c52c78: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x1c52c78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1c52c7c:
    // 0x1c52c7c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c52c7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c52c80:
    // 0x1c52c80: 0x160f0008  bne         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C52C80u;
    {
        const bool branch_taken_0x1c52c80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C52C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52C80u;
        // 0x1c52c84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52c80) {
            ctx->pc = 0x1C52CA4u;
            goto label_1c52ca4;
        }
    }
    ctx->pc = 0x1C52C88u;
    // 0x1c52c88: 0xc713e5e  jal         func_1C4F978
    ctx->pc = 0x1C52C88u;
    SET_GPR_U32(ctx, 31, 0x1C52C90u);
    ctx->pc = 0x1C52C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52C88u;
    // 0x1c52c8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F978u, 0x1C52C88u, 0x1C52C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52C90u;
label_1c52c90:
    // 0x1c52c90: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C52C90u;
    {
        const bool branch_taken_0x1c52c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C52C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52C90u;
        // 0x1c52c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52c90) {
            ctx->pc = 0x1C52CA4u;
            goto label_1c52ca4;
        }
    }
    ctx->pc = 0x1C52C98u;
    // 0x1c52c98: 0xc713e60  jal         func_1C4F980
    ctx->pc = 0x1C52C98u;
    SET_GPR_U32(ctx, 31, 0x1C52CA0u);
    ctx->pc = 0x1C52C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52C98u;
    // 0x1c52c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F980u, 0x1C52C98u, 0x1C52CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52CA0u;
label_1c52ca0:
    // 0x1c52ca0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c52ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c52ca4:
    // 0x1c52ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c52ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c52ca8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c52ca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c52cac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c52cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c52cb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c52cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c52cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C52CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C52CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52CB4u;
        // 0x1c52cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C52CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C52CBCu;
    // 0x1c52cbc: 0x0  nop
    ctx->pc = 0x1c52cbcu;
    // NOP
label_1c52cc0:
    // 0x1c52cc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c52cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c52cc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c52cc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c52cc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c52cc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c52ccc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c52cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c52cd0: 0x8714226  j           func_1C50898
    ctx->pc = 0x1C52CD0u;
    ctx->pc = 0x1C52CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52CD0u;
    // 0x1c52cd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50898u;
    sub_01C50898_0x1c50898(rdram, ctx, runtime); return;
    ctx->pc = 0x1C52CD8u;
}
