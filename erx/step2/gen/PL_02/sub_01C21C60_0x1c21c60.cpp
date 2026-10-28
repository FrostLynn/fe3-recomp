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

// Function: sub_01C21C60
// Address: 0x1c21c60 - 0x1c21df4
void sub_01C21C60_0x1c21c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C21C60_0x1c21c60");
#endif

    switch (ctx->pc) {
        case 0x1c21c84u: goto label_1c21c84;
        case 0x1c21c94u: goto label_1c21c94;
        case 0x1c21ca0u: goto label_1c21ca0;
        case 0x1c21cb0u: goto label_1c21cb0;
        case 0x1c21cbcu: goto label_1c21cbc;
        case 0x1c21cdcu: goto label_1c21cdc;
        case 0x1c21cf4u: goto label_1c21cf4;
        case 0x1c21d38u: goto label_1c21d38;
        case 0x1c21d4cu: goto label_1c21d4c;
        case 0x1c21d58u: goto label_1c21d58;
        case 0x1c21d68u: goto label_1c21d68;
        case 0x1c21d78u: goto label_1c21d78;
        case 0x1c21d84u: goto label_1c21d84;
        case 0x1c21dc0u: goto label_1c21dc0;
        case 0x1c21dd0u: goto label_1c21dd0;
        case 0x1c21dd8u: goto label_1c21dd8;
        default: break;
    }

    ctx->pc = 0x1c21c60u;

    // 0x1c21c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c21c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c21c64: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c21c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c21c68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c21c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c21c6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c21c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c21c70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c21c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c21c74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c21c74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21c78: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c21c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c21c7c: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C21C7Cu;
    SET_GPR_U32(ctx, 31, 0x1C21C84u);
    ctx->pc = 0x1C21C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21C7Cu;
    // 0x1c21c80: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C21C7Cu, 0x1C21C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21C84u;
label_1c21c84:
    // 0x1c21c84: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c21c84u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c21c88: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c21c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c21c8c: 0xc707f16  jal         func_1C1FC58
    ctx->pc = 0x1C21C8Cu;
    SET_GPR_U32(ctx, 31, 0x1C21C94u);
    ctx->pc = 0x1C21C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21C8Cu;
    // 0x1c21c90: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FC58u, 0x1C21C8Cu, 0x1C21C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21C94u;
label_1c21c94:
    // 0x1c21c94: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1c21c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c21c98: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C21C98u;
    SET_GPR_U32(ctx, 31, 0x1C21CA0u);
    ctx->pc = 0x1C21C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21C98u;
    // 0x1c21c9c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C21C98u, 0x1C21CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21CA0u;
label_1c21ca0:
    // 0x1c21ca0: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c21ca0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c21ca4: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c21ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c21ca8: 0xc707f16  jal         func_1C1FC58
    ctx->pc = 0x1C21CA8u;
    SET_GPR_U32(ctx, 31, 0x1C21CB0u);
    ctx->pc = 0x1C21CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21CA8u;
    // 0x1c21cac: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FC58u, 0x1C21CA8u, 0x1C21CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21CB0u;
label_1c21cb0:
    // 0x1c21cb0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1c21cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c21cb4: 0xc707c5c  jal         func_1C1F170
    ctx->pc = 0x1C21CB4u;
    SET_GPR_U32(ctx, 31, 0x1C21CBCu);
    ctx->pc = 0x1C21CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21CB4u;
    // 0x1c21cb8: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F170u, 0x1C21CB4u, 0x1C21CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21CBCu;
label_1c21cbc:
    // 0x1c21cbc: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x1c21cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1c21cc0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c21cc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c21cc4: 0x160f0006  bne         $s0, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C21CC4u;
    {
        const bool branch_taken_0x1c21cc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C21CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21CC4u;
        // 0x1c21cc8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21cc4) {
            ctx->pc = 0x1C21CE0u;
            goto label_1c21ce0;
        }
    }
    ctx->pc = 0x1C21CCCu;
    // 0x1c21ccc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c21cccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c21cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c21cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21cd4: 0xc707c54  jal         func_1C1F150
    ctx->pc = 0x1C21CD4u;
    SET_GPR_U32(ctx, 31, 0x1C21CDCu);
    ctx->pc = 0x1C21CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21CD4u;
    // 0x1c21cd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F150u, 0x1C21CD4u, 0x1C21CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21CDCu;
label_1c21cdc:
    // 0x1c21cdc: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x1c21cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1c21ce0:
    // 0x1c21ce0: 0x16000033  bnez        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1C21CE0u;
    {
        const bool branch_taken_0x1c21ce0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C21CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21CE0u;
        // 0x1c21ce4: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21ce0) {
            ctx->pc = 0x1C21DB0u;
            goto label_1c21db0;
        }
    }
    ctx->pc = 0x1C21CE8u;
    // 0x1c21ce8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c21ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c21cec: 0xc707c6c  jal         func_1C1F1B0
    ctx->pc = 0x1C21CECu;
    SET_GPR_U32(ctx, 31, 0x1C21CF4u);
    ctx->pc = 0x1C21CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21CECu;
    // 0x1c21cf0: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F1B0u, 0x1C21CECu, 0x1C21CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21CF4u;
label_1c21cf4:
    // 0x1c21cf4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c21cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c21cf8: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x1C21CF8u;
    {
        const bool branch_taken_0x1c21cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c21cf8) {
            ctx->pc = 0x1C21CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C21CF8u;
            // 0x1c21cfc: 0x8e300018  lw          $s0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C21DACu;
            goto label_1c21dac;
        }
    }
    ctx->pc = 0x1C21D00u;
    // 0x1c21d00: 0x8e4f0008  lw          $t7, 0x8($s2)
    ctx->pc = 0x1c21d00u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c21d04: 0x25effff5  addiu       $t7, $t7, -0xB
    ctx->pc = 0x1c21d04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967285));
    // 0x1c21d08: 0x2dee0014  sltiu       $t6, $t7, 0x14
    ctx->pc = 0x1c21d08u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1c21d0c: 0x11c00041  beqz        $t6, . + 4 + (0x41 << 2)
    ctx->pc = 0x1C21D0Cu;
    {
        const bool branch_taken_0x1c21d0c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21D0Cu;
        // 0x1c21d10: 0x3c0e01c2  lui         $t6, 0x1C2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)450 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21d0c) {
            ctx->pc = 0x1C21E14u;
            return;
        }
    }
    ctx->pc = 0x1C21D14u;
    // 0x1c21d14: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c21d14u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c21d18: 0x25ce32a0  addiu       $t6, $t6, 0x32A0
    ctx->pc = 0x1c21d18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12960));
    // 0x1c21d1c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c21d1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c21d20: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c21d20u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c21d24: 0x1a00008  jr          $t5
    ctx->pc = 0x1C21D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C21D2Cu: goto label_1c21d2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C21D24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C21D2Cu;
label_1c21d2c:
    // 0x1c21d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c21d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21d30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c21d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21d34: 0x240601d3  addiu       $a2, $zero, 0x1D3
    ctx->pc = 0x1c21d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
label_1c21d38:
    // 0x1c21d38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c21d38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21d3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c21d3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21d40: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c21d40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c21d44: 0xc707c66  jal         func_1C1F198
    ctx->pc = 0x1C21D44u;
    SET_GPR_U32(ctx, 31, 0x1C21D4Cu);
    ctx->pc = 0x1C21D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21D44u;
    // 0x1c21d48: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F198u, 0x1C21D44u, 0x1C21D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21D4Cu;
label_1c21d4c:
    // 0x1c21d4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c21d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21d50: 0xc707c5e  jal         func_1C1F178
    ctx->pc = 0x1C21D50u;
    SET_GPR_U32(ctx, 31, 0x1C21D58u);
    ctx->pc = 0x1C21D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21D50u;
    // 0x1c21d54: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F178u, 0x1C21D50u, 0x1C21D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21D58u;
label_1c21d58:
    // 0x1c21d58: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c21d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c21d5c: 0x26440390  addiu       $a0, $s2, 0x390
    ctx->pc = 0x1c21d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 912));
    // 0x1c21d60: 0xc707c60  jal         func_1C1F180
    ctx->pc = 0x1C21D60u;
    SET_GPR_U32(ctx, 31, 0x1C21D68u);
    ctx->pc = 0x1C21D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21D60u;
    // 0x1c21d64: 0x2405011e  addiu       $a1, $zero, 0x11E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F180u, 0x1C21D60u, 0x1C21D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21D68u;
label_1c21d68:
    // 0x1c21d68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c21d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c21d6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c21d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21d70: 0xc707c54  jal         func_1C1F150
    ctx->pc = 0x1C21D70u;
    SET_GPR_U32(ctx, 31, 0x1C21D78u);
    ctx->pc = 0x1C21D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21D70u;
    // 0x1c21d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F150u, 0x1C21D70u, 0x1C21D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21D78u;
label_1c21d78:
    // 0x1c21d78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c21d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21d7c: 0xc707c62  jal         func_1C1F188
    ctx->pc = 0x1C21D7Cu;
    SET_GPR_U32(ctx, 31, 0x1C21D84u);
    ctx->pc = 0x1C21D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21D7Cu;
    // 0x1c21d80: 0x240500ba  addiu       $a1, $zero, 0xBA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F188u, 0x1C21D7Cu, 0x1C21D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21D84u;
label_1c21d84:
    // 0x1c21d84: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c21d84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c21d88: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1c21d88u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c21d8c: 0xae2f0018  sw          $t7, 0x18($s1)
    ctx->pc = 0x1c21d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 15));
    // 0x1c21d90: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1c21d90u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1c21d94: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1c21d94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c21d98: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C21D98u;
    {
        const bool branch_taken_0x1c21d98 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C21D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21D98u;
        // 0x1c21d9c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21d98) {
            ctx->pc = 0x1C21DACu;
            goto label_1c21dac;
        }
    }
    ctx->pc = 0x1C21DA0u;
    // 0x1c21da0: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1c21da0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c21da4: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1c21da4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
    // 0x1c21da8: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x1c21da8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1c21dac:
    // 0x1c21dac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c21dacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c21db0:
    // 0x1c21db0: 0x160f000a  bne         $s0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C21DB0u;
    {
        const bool branch_taken_0x1c21db0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C21DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21DB0u;
        // 0x1c21db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21db0) {
            ctx->pc = 0x1C21DDCu;
            goto label_1c21ddc;
        }
    }
    ctx->pc = 0x1C21DB8u;
    // 0x1c21db8: 0xc707c56  jal         func_1C1F158
    ctx->pc = 0x1C21DB8u;
    SET_GPR_U32(ctx, 31, 0x1C21DC0u);
    ctx->pc = 0x1C21DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21DB8u;
    // 0x1c21dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F158u, 0x1C21DB8u, 0x1C21DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21DC0u;
label_1c21dc0:
    // 0x1c21dc0: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C21DC0u;
    {
        const bool branch_taken_0x1c21dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C21DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21DC0u;
        // 0x1c21dc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21dc0) {
            ctx->pc = 0x1C21DDCu;
            goto label_1c21ddc;
        }
    }
    ctx->pc = 0x1C21DC8u;
    // 0x1c21dc8: 0xc707c70  jal         func_1C1F1C0
    ctx->pc = 0x1C21DC8u;
    SET_GPR_U32(ctx, 31, 0x1C21DD0u);
    ctx->pc = 0x1C21DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21DC8u;
    // 0x1c21dcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F1C0u, 0x1C21DC8u, 0x1C21DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21DD0u;
label_1c21dd0:
    // 0x1c21dd0: 0xc707c58  jal         func_1C1F160
    ctx->pc = 0x1C21DD0u;
    SET_GPR_U32(ctx, 31, 0x1C21DD8u);
    ctx->pc = 0x1C21DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21DD0u;
    // 0x1c21dd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F160u, 0x1C21DD0u, 0x1C21DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21DD8u;
label_1c21dd8:
    // 0x1c21dd8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c21dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c21ddc:
    // 0x1c21ddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c21ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c21de0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c21de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c21de4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c21de4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c21de8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c21de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c21dec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C21DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C21DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21DECu;
        // 0x1c21df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C21DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C21DF4u;
}
