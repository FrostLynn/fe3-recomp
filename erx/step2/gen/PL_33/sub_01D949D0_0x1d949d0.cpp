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

// Function: sub_01D949D0
// Address: 0x1d949d0 - 0x1d94ae0
void sub_01D949D0_0x1d949d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D949D0_0x1d949d0");
#endif

    switch (ctx->pc) {
        case 0x1d949f0u: goto label_1d949f0;
        case 0x1d94a04u: goto label_1d94a04;
        case 0x1d94a08u: goto label_1d94a08;
        case 0x1d94a24u: goto label_1d94a24;
        case 0x1d94a34u: goto label_1d94a34;
        case 0x1d94a80u: goto label_1d94a80;
        case 0x1d94abcu: goto label_1d94abc;
        case 0x1d94ac8u: goto label_1d94ac8;
        default: break;
    }

    ctx->pc = 0x1d949d0u;

    // 0x1d949d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d949d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d949d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d949d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d949d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d949d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d949dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d949dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d949e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d949e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d949e4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d949e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d949e8: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D949E8u;
    SET_GPR_U32(ctx, 31, 0x1D949F0u);
    ctx->pc = 0x1D949ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D949E8u;
    // 0x1d949ec: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D949E8u, 0x1D949F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D949F0u;
label_1d949f0:
    // 0x1d949f0: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d949f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d949f4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D949F4u;
    {
        const bool branch_taken_0x1d949f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D949F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D949F4u;
        // 0x1d949f8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d949f4) {
            ctx->pc = 0x1D94A40u;
            goto label_1d94a40;
        }
    }
    ctx->pc = 0x1D949FCu;
    // 0x1d949fc: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D949FCu;
    {
        const bool branch_taken_0x1d949fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d949fc) {
            ctx->pc = 0x1D94A1Cu;
            goto label_1d94a1c;
        }
    }
    ctx->pc = 0x1D94A04u;
label_1d94a04:
    // 0x1d94a04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d94a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d94a08:
    // 0x1d94a08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d94a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d94a0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d94a0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d94a10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d94a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d94a14: 0x3e00008  jr          $ra
    ctx->pc = 0x1D94A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D94A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94A14u;
        // 0x1d94a18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D94A1Cu;
label_1d94a1c:
    // 0x1d94a1c: 0xc764a12  jal         func_1D92848
    ctx->pc = 0x1D94A1Cu;
    SET_GPR_U32(ctx, 31, 0x1D94A24u);
    ctx->pc = 0x1D94A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94A1Cu;
    // 0x1d94a20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92848u, 0x1D94A1Cu, 0x1D94A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94A24u;
label_1d94a24:
    // 0x1d94a24: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D94A24u;
    {
        const bool branch_taken_0x1d94a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D94A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94A24u;
        // 0x1d94a28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94a24) {
            ctx->pc = 0x1D94A04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d94a04;
        }
    }
    ctx->pc = 0x1D94A2Cu;
    // 0x1d94a2c: 0xc764a14  jal         func_1D92850
    ctx->pc = 0x1D94A2Cu;
    SET_GPR_U32(ctx, 31, 0x1D94A34u);
    ctx->pc = 0x1D92850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92850u, 0x1D94A2Cu, 0x1D94A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94A34u;
label_1d94a34:
    // 0x1d94a34: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D94A34u;
    {
        const bool branch_taken_0x1d94a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94A34u;
        // 0x1d94a38: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94a34) {
            ctx->pc = 0x1D94A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d94a08;
        }
    }
    ctx->pc = 0x1D94A3Cu;
    // 0x1d94a3c: 0x0  nop
    ctx->pc = 0x1d94a3cu;
    // NOP
label_1d94a40:
    // 0x1d94a40: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d94a40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d94a44: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D94A44u;
    {
        const bool branch_taken_0x1d94a44 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D94A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94A44u;
        // 0x1d94a48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94a44) {
            ctx->pc = 0x1D94A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d94a08;
        }
    }
    ctx->pc = 0x1D94A4Cu;
    // 0x1d94a4c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d94a4cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d94a50: 0x3c0e01da  lui         $t6, 0x1DA
    ctx->pc = 0x1d94a50u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)474 << 16));
    // 0x1d94a54: 0x25ce88f0  addiu       $t6, $t6, -0x7710
    ctx->pc = 0x1d94a54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294936816));
    // 0x1d94a58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d94a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94a5c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d94a5cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d94a60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d94a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94a64: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d94a64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d94a68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d94a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94a6c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d94a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d94a70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d94a70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94a74: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d94a74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d94a78: 0xc764a22  jal         func_1D92888
    ctx->pc = 0x1D94A78u;
    SET_GPR_U32(ctx, 31, 0x1D94A80u);
    ctx->pc = 0x1D94A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94A78u;
    // 0x1d94a7c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92888u, 0x1D94A78u, 0x1D94A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94A80u;
label_1d94a80:
    // 0x1d94a80: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d94a80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d94a84: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D94A84u;
    {
        const bool branch_taken_0x1d94a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94A84u;
        // 0x1d94a88: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94a84) {
            ctx->pc = 0x1D94A04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d94a04;
        }
    }
    ctx->pc = 0x1D94A8Cu;
    // 0x1d94a8c: 0x0  nop
    ctx->pc = 0x1d94a8cu;
    // NOP
    // 0x1d94a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d94a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d94a94: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d94a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d94a98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d94a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d94a9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d94a9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94aa0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d94aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d94aa4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d94aa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94aa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d94aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94aac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d94aacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d94ab0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d94ab0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94ab4: 0xc764a22  jal         func_1D92888
    ctx->pc = 0x1D94AB4u;
    SET_GPR_U32(ctx, 31, 0x1D94ABCu);
    ctx->pc = 0x1D94AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94AB4u;
    // 0x1d94ab8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92888u, 0x1D94AB4u, 0x1D94ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94ABCu;
label_1d94abc:
    // 0x1d94abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94ac0: 0xc764a1a  jal         func_1D92868
    ctx->pc = 0x1D94AC0u;
    SET_GPR_U32(ctx, 31, 0x1D94AC8u);
    ctx->pc = 0x1D94AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94AC0u;
    // 0x1d94ac4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92868u, 0x1D94AC0u, 0x1D94AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94AC8u;
label_1d94ac8:
    // 0x1d94ac8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d94ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d94acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94ad0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d94ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d94ad4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d94ad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d94ad8: 0x8764a2e  j           func_1D928B8
    ctx->pc = 0x1D94AD8u;
    ctx->pc = 0x1D94ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94AD8u;
    // 0x1d94adc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D928B8u;
    sub_01D928B8_0x1d928b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D94AE0u;
}
