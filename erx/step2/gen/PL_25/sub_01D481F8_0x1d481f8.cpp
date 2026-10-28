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

// Function: sub_01D481F8
// Address: 0x1d481f8 - 0x1d48308
void sub_01D481F8_0x1d481f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D481F8_0x1d481f8");
#endif

    switch (ctx->pc) {
        case 0x1d48218u: goto label_1d48218;
        case 0x1d4822cu: goto label_1d4822c;
        case 0x1d48230u: goto label_1d48230;
        case 0x1d4824cu: goto label_1d4824c;
        case 0x1d4825cu: goto label_1d4825c;
        case 0x1d482a8u: goto label_1d482a8;
        case 0x1d482e4u: goto label_1d482e4;
        case 0x1d482f0u: goto label_1d482f0;
        default: break;
    }

    ctx->pc = 0x1d481f8u;

    // 0x1d481f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d481f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d481fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d481fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d48200: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d48200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d48204: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d48204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d48208: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d48208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4820c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d4820cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d48210: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D48210u;
    SET_GPR_U32(ctx, 31, 0x1D48218u);
    ctx->pc = 0x1D48214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48210u;
    // 0x1d48214: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D48210u, 0x1D48218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D48218u;
label_1d48218:
    // 0x1d48218: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d48218u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d4821c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D4821Cu;
    {
        const bool branch_taken_0x1d4821c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4821Cu;
        // 0x1d48220: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4821c) {
            ctx->pc = 0x1D48268u;
            goto label_1d48268;
        }
    }
    ctx->pc = 0x1D48224u;
    // 0x1d48224: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D48224u;
    {
        const bool branch_taken_0x1d48224 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d48224) {
            ctx->pc = 0x1D48244u;
            goto label_1d48244;
        }
    }
    ctx->pc = 0x1D4822Cu;
label_1d4822c:
    // 0x1d4822c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d4822cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d48230:
    // 0x1d48230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d48230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d48234: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d48234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d48238: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d48238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4823c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4823Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D48240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4823Cu;
        // 0x1d48240: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4823Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D48244u;
label_1d48244:
    // 0x1d48244: 0xc751752  jal         func_1D45D48
    ctx->pc = 0x1D48244u;
    SET_GPR_U32(ctx, 31, 0x1D4824Cu);
    ctx->pc = 0x1D48248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48244u;
    // 0x1d48248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D48u, 0x1D48244u, 0x1D4824Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4824Cu;
label_1d4824c:
    // 0x1d4824c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D4824Cu;
    {
        const bool branch_taken_0x1d4824c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D48250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4824Cu;
        // 0x1d48250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4824c) {
            ctx->pc = 0x1D4822Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4822c;
        }
    }
    ctx->pc = 0x1D48254u;
    // 0x1d48254: 0xc751754  jal         func_1D45D50
    ctx->pc = 0x1D48254u;
    SET_GPR_U32(ctx, 31, 0x1D4825Cu);
    ctx->pc = 0x1D45D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D50u, 0x1D48254u, 0x1D4825Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4825Cu;
label_1d4825c:
    // 0x1d4825c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D4825Cu;
    {
        const bool branch_taken_0x1d4825c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4825Cu;
        // 0x1d48260: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4825c) {
            ctx->pc = 0x1D48230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d48230;
        }
    }
    ctx->pc = 0x1D48264u;
    // 0x1d48264: 0x0  nop
    ctx->pc = 0x1d48264u;
    // NOP
label_1d48268:
    // 0x1d48268: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d48268u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d4826c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D4826Cu;
    {
        const bool branch_taken_0x1d4826c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D48270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4826Cu;
        // 0x1d48270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4826c) {
            ctx->pc = 0x1D48230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d48230;
        }
    }
    ctx->pc = 0x1D48274u;
    // 0x1d48274: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d48274u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d48278: 0x3c0e01d5  lui         $t6, 0x1D5
    ctx->pc = 0x1d48278u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)469 << 16));
    // 0x1d4827c: 0x25ceaf00  addiu       $t6, $t6, -0x5100
    ctx->pc = 0x1d4827cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946560));
    // 0x1d48280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d48280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48284: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d48284u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d48288: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d48288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4828c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d4828cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d48290: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d48290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48294: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d48294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d48298: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d48298u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4829c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d4829cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d482a0: 0xc751762  jal         func_1D45D88
    ctx->pc = 0x1D482A0u;
    SET_GPR_U32(ctx, 31, 0x1D482A8u);
    ctx->pc = 0x1D482A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D482A0u;
    // 0x1d482a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D88u, 0x1D482A0u, 0x1D482A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D482A8u;
label_1d482a8:
    // 0x1d482a8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d482a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d482ac: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D482ACu;
    {
        const bool branch_taken_0x1d482ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D482B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D482ACu;
        // 0x1d482b0: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d482ac) {
            ctx->pc = 0x1D4822Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4822c;
        }
    }
    ctx->pc = 0x1D482B4u;
    // 0x1d482b4: 0x0  nop
    ctx->pc = 0x1d482b4u;
    // NOP
    // 0x1d482b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d482b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d482bc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d482bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d482c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d482c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d482c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d482c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d482c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d482c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d482cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d482ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d482d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d482d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d482d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d482d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d482d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d482d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d482dc: 0xc751762  jal         func_1D45D88
    ctx->pc = 0x1D482DCu;
    SET_GPR_U32(ctx, 31, 0x1D482E4u);
    ctx->pc = 0x1D482E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D482DCu;
    // 0x1d482e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D88u, 0x1D482DCu, 0x1D482E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D482E4u;
label_1d482e4:
    // 0x1d482e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d482e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d482e8: 0xc75175a  jal         func_1D45D68
    ctx->pc = 0x1D482E8u;
    SET_GPR_U32(ctx, 31, 0x1D482F0u);
    ctx->pc = 0x1D482ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D482E8u;
    // 0x1d482ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D68u, 0x1D482E8u, 0x1D482F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D482F0u;
label_1d482f0:
    // 0x1d482f0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d482f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d482f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d482f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d482f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d482f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d482fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D482FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D48300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D482FCu;
        // 0x1d48300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D482FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D48304u;
    // 0x1d48304: 0x0  nop
    ctx->pc = 0x1d48304u;
    // NOP
    ctx->pc = 0x1d48308u;
}
