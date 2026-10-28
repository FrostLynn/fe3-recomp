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

// Function: sub_01D94C48
// Address: 0x1d94c48 - 0x1d94d80
void sub_01D94C48_0x1d94c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D94C48_0x1d94c48");
#endif

    switch (ctx->pc) {
        case 0x1d94c68u: goto label_1d94c68;
        case 0x1d94c7cu: goto label_1d94c7c;
        case 0x1d94c80u: goto label_1d94c80;
        case 0x1d94c9cu: goto label_1d94c9c;
        case 0x1d94cacu: goto label_1d94cac;
        case 0x1d94cf8u: goto label_1d94cf8;
        case 0x1d94d34u: goto label_1d94d34;
        case 0x1d94d40u: goto label_1d94d40;
        case 0x1d94d50u: goto label_1d94d50;
        case 0x1d94d68u: goto label_1d94d68;
        default: break;
    }

    ctx->pc = 0x1d94c48u;

    // 0x1d94c48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d94c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d94c4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d94c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d94c50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d94c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d94c54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d94c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d94c58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d94c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94c5c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d94c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d94c60: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D94C60u;
    SET_GPR_U32(ctx, 31, 0x1D94C68u);
    ctx->pc = 0x1D94C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94C60u;
    // 0x1d94c64: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D94C60u, 0x1D94C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94C68u;
label_1d94c68:
    // 0x1d94c68: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d94c68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d94c6c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D94C6Cu;
    {
        const bool branch_taken_0x1d94c6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94C6Cu;
        // 0x1d94c70: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94c6c) {
            ctx->pc = 0x1D94CB8u;
            goto label_1d94cb8;
        }
    }
    ctx->pc = 0x1D94C74u;
    // 0x1d94c74: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D94C74u;
    {
        const bool branch_taken_0x1d94c74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d94c74) {
            ctx->pc = 0x1D94C94u;
            goto label_1d94c94;
        }
    }
    ctx->pc = 0x1D94C7Cu;
label_1d94c7c:
    // 0x1d94c7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d94c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d94c80:
    // 0x1d94c80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d94c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d94c84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d94c84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d94c88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d94c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d94c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D94C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D94C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94C8Cu;
        // 0x1d94c90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D94C94u;
label_1d94c94:
    // 0x1d94c94: 0xc764a12  jal         func_1D92848
    ctx->pc = 0x1D94C94u;
    SET_GPR_U32(ctx, 31, 0x1D94C9Cu);
    ctx->pc = 0x1D94C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94C94u;
    // 0x1d94c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92848u, 0x1D94C94u, 0x1D94C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94C9Cu;
label_1d94c9c:
    // 0x1d94c9c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D94C9Cu;
    {
        const bool branch_taken_0x1d94c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D94CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94C9Cu;
        // 0x1d94ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94c9c) {
            ctx->pc = 0x1D94C7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d94c7c;
        }
    }
    ctx->pc = 0x1D94CA4u;
    // 0x1d94ca4: 0xc764a14  jal         func_1D92850
    ctx->pc = 0x1D94CA4u;
    SET_GPR_U32(ctx, 31, 0x1D94CACu);
    ctx->pc = 0x1D92850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92850u, 0x1D94CA4u, 0x1D94CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94CACu;
label_1d94cac:
    // 0x1d94cac: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D94CACu;
    {
        const bool branch_taken_0x1d94cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94CACu;
        // 0x1d94cb0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94cac) {
            ctx->pc = 0x1D94C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d94c80;
        }
    }
    ctx->pc = 0x1D94CB4u;
    // 0x1d94cb4: 0x0  nop
    ctx->pc = 0x1d94cb4u;
    // NOP
label_1d94cb8:
    // 0x1d94cb8: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d94cb8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d94cbc: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D94CBCu;
    {
        const bool branch_taken_0x1d94cbc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D94CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94CBCu;
        // 0x1d94cc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94cbc) {
            ctx->pc = 0x1D94C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d94c80;
        }
    }
    ctx->pc = 0x1D94CC4u;
    // 0x1d94cc4: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d94cc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d94cc8: 0x3c0e01da  lui         $t6, 0x1DA
    ctx->pc = 0x1d94cc8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)474 << 16));
    // 0x1d94ccc: 0x25ce8910  addiu       $t6, $t6, -0x76F0
    ctx->pc = 0x1d94cccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294936848));
    // 0x1d94cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d94cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94cd4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d94cd4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d94cd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d94cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94cdc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d94cdcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d94ce0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d94ce0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94ce4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d94ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d94ce8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d94ce8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94cec: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d94cecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d94cf0: 0xc764a22  jal         func_1D92888
    ctx->pc = 0x1D94CF0u;
    SET_GPR_U32(ctx, 31, 0x1D94CF8u);
    ctx->pc = 0x1D94CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94CF0u;
    // 0x1d94cf4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92888u, 0x1D94CF0u, 0x1D94CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94CF8u;
label_1d94cf8:
    // 0x1d94cf8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d94cf8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d94cfc: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D94CFCu;
    {
        const bool branch_taken_0x1d94cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94CFCu;
        // 0x1d94d00: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94cfc) {
            ctx->pc = 0x1D94C7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d94c7c;
        }
    }
    ctx->pc = 0x1D94D04u;
    // 0x1d94d04: 0x0  nop
    ctx->pc = 0x1d94d04u;
    // NOP
    // 0x1d94d08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d94d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d94d0c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d94d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d94d10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d94d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d94d14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d94d14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94d18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d94d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d94d1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d94d1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94d20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d94d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94d24: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d94d24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d94d28: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d94d28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94d2c: 0xc764a22  jal         func_1D92888
    ctx->pc = 0x1D94D2Cu;
    SET_GPR_U32(ctx, 31, 0x1D94D34u);
    ctx->pc = 0x1D94D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94D2Cu;
    // 0x1d94d30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92888u, 0x1D94D2Cu, 0x1D94D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94D34u;
label_1d94d34:
    // 0x1d94d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94d38: 0xc764a1a  jal         func_1D92868
    ctx->pc = 0x1D94D38u;
    SET_GPR_U32(ctx, 31, 0x1D94D40u);
    ctx->pc = 0x1D94D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94D38u;
    // 0x1d94d3c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92868u, 0x1D94D38u, 0x1D94D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94D40u;
label_1d94d40:
    // 0x1d94d40: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d94d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d94d44: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d94d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d94d48: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D94D48u;
    SET_GPR_U32(ctx, 31, 0x1D94D50u);
    ctx->pc = 0x1D94D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94D48u;
    // 0x1d94d4c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D94D48u, 0x1D94D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94D50u;
label_1d94d50:
    // 0x1d94d50: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d94d50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d94d54: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d94d54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d94d58: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d94d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d94d5c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d94d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d94d60: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D94D60u;
    SET_GPR_U32(ctx, 31, 0x1D94D68u);
    ctx->pc = 0x1D94D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94D60u;
    // 0x1d94d64: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D94D60u, 0x1D94D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94D68u;
label_1d94d68:
    // 0x1d94d68: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d94d68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d94d6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d94d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d94d70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d94d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d94d74: 0x3e00008  jr          $ra
    ctx->pc = 0x1D94D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D94D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94D74u;
        // 0x1d94d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D94D7Cu;
    // 0x1d94d7c: 0x0  nop
    ctx->pc = 0x1d94d7cu;
    // NOP
    ctx->pc = 0x1d94d80u;
}
