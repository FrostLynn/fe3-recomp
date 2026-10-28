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

// Function: sub_01D71168
// Address: 0x1d71168 - 0x1d71278
void sub_01D71168_0x1d71168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D71168_0x1d71168");
#endif

    switch (ctx->pc) {
        case 0x1d71188u: goto label_1d71188;
        case 0x1d7119cu: goto label_1d7119c;
        case 0x1d711a0u: goto label_1d711a0;
        case 0x1d711bcu: goto label_1d711bc;
        case 0x1d711ccu: goto label_1d711cc;
        case 0x1d71218u: goto label_1d71218;
        case 0x1d71254u: goto label_1d71254;
        case 0x1d71260u: goto label_1d71260;
        default: break;
    }

    ctx->pc = 0x1d71168u;

    // 0x1d71168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d71168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7116c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7116cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d71170: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d71170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d71174: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d71174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d71178: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d71178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7117c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d7117cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d71180: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D71180u;
    SET_GPR_U32(ctx, 31, 0x1D71188u);
    ctx->pc = 0x1D71184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71180u;
    // 0x1d71184: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D71180u, 0x1D71188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71188u;
label_1d71188:
    // 0x1d71188: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d71188u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d7118c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D7118Cu;
    {
        const bool branch_taken_0x1d7118c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D71190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7118Cu;
        // 0x1d71190: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7118c) {
            ctx->pc = 0x1D711D8u;
            goto label_1d711d8;
        }
    }
    ctx->pc = 0x1D71194u;
    // 0x1d71194: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D71194u;
    {
        const bool branch_taken_0x1d71194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d71194) {
            ctx->pc = 0x1D711B4u;
            goto label_1d711b4;
        }
    }
    ctx->pc = 0x1D7119Cu;
label_1d7119c:
    // 0x1d7119c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d7119cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d711a0:
    // 0x1d711a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d711a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d711a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d711a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d711a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d711a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d711ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D711ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D711B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D711ACu;
        // 0x1d711b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D711ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D711B4u;
label_1d711b4:
    // 0x1d711b4: 0xc75c008  jal         func_1D70020
    ctx->pc = 0x1D711B4u;
    SET_GPR_U32(ctx, 31, 0x1D711BCu);
    ctx->pc = 0x1D711B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D711B4u;
    // 0x1d711b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70020u, 0x1D711B4u, 0x1D711BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D711BCu;
label_1d711bc:
    // 0x1d711bc: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D711BCu;
    {
        const bool branch_taken_0x1d711bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D711C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D711BCu;
        // 0x1d711c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d711bc) {
            ctx->pc = 0x1D7119Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7119c;
        }
    }
    ctx->pc = 0x1D711C4u;
    // 0x1d711c4: 0xc75c00a  jal         func_1D70028
    ctx->pc = 0x1D711C4u;
    SET_GPR_U32(ctx, 31, 0x1D711CCu);
    ctx->pc = 0x1D70028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70028u, 0x1D711C4u, 0x1D711CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D711CCu;
label_1d711cc:
    // 0x1d711cc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D711CCu;
    {
        const bool branch_taken_0x1d711cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D711D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D711CCu;
        // 0x1d711d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d711cc) {
            ctx->pc = 0x1D711A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d711a0;
        }
    }
    ctx->pc = 0x1D711D4u;
    // 0x1d711d4: 0x0  nop
    ctx->pc = 0x1d711d4u;
    // NOP
label_1d711d8:
    // 0x1d711d8: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d711d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d711dc: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D711DCu;
    {
        const bool branch_taken_0x1d711dc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D711E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D711DCu;
        // 0x1d711e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d711dc) {
            ctx->pc = 0x1D711A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d711a0;
        }
    }
    ctx->pc = 0x1D711E4u;
    // 0x1d711e4: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d711e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d711e8: 0x3c0e01d7  lui         $t6, 0x1D7
    ctx->pc = 0x1d711e8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)471 << 16));
    // 0x1d711ec: 0x25ce3da0  addiu       $t6, $t6, 0x3DA0
    ctx->pc = 0x1d711ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 15776));
    // 0x1d711f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d711f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d711f4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d711f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d711f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d711f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d711fc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d711fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d71200: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d71200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71204: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d71204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d71208: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d71208u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7120c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d7120cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d71210: 0xc75c018  jal         func_1D70060
    ctx->pc = 0x1D71210u;
    SET_GPR_U32(ctx, 31, 0x1D71218u);
    ctx->pc = 0x1D71214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71210u;
    // 0x1d71214: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70060u, 0x1D71210u, 0x1D71218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71218u;
label_1d71218:
    // 0x1d71218: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d71218u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7121c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D7121Cu;
    {
        const bool branch_taken_0x1d7121c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D71220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7121Cu;
        // 0x1d71220: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7121c) {
            ctx->pc = 0x1D7119Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7119c;
        }
    }
    ctx->pc = 0x1D71224u;
    // 0x1d71224: 0x0  nop
    ctx->pc = 0x1d71224u;
    // NOP
    // 0x1d71228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d71228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7122c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d7122cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d71230: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d71230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d71234: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d71234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71238: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d71238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7123c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7123cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71240: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d71240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71244: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d71244u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d71248: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d71248u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7124c: 0xc75c018  jal         func_1D70060
    ctx->pc = 0x1D7124Cu;
    SET_GPR_U32(ctx, 31, 0x1D71254u);
    ctx->pc = 0x1D71250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7124Cu;
    // 0x1d71250: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70060u, 0x1D7124Cu, 0x1D71254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71254u;
label_1d71254:
    // 0x1d71254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d71254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71258: 0xc75c010  jal         func_1D70040
    ctx->pc = 0x1D71258u;
    SET_GPR_U32(ctx, 31, 0x1D71260u);
    ctx->pc = 0x1D7125Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71258u;
    // 0x1d7125c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70040u, 0x1D71258u, 0x1D71260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71260u;
label_1d71260:
    // 0x1d71260: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d71260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d71264: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d71264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d71268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d71268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7126c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7126Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D71270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7126Cu;
        // 0x1d71270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7126Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D71274u;
    // 0x1d71274: 0x0  nop
    ctx->pc = 0x1d71274u;
    // NOP
    ctx->pc = 0x1d71278u;
}
