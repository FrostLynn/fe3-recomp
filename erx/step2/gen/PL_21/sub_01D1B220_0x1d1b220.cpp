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

// Function: sub_01D1B220
// Address: 0x1d1b220 - 0x1d1b358
void sub_01D1B220_0x1d1b220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1B220_0x1d1b220");
#endif

    switch (ctx->pc) {
        case 0x1d1b240u: goto label_1d1b240;
        case 0x1d1b254u: goto label_1d1b254;
        case 0x1d1b258u: goto label_1d1b258;
        case 0x1d1b274u: goto label_1d1b274;
        case 0x1d1b284u: goto label_1d1b284;
        case 0x1d1b2d0u: goto label_1d1b2d0;
        case 0x1d1b30cu: goto label_1d1b30c;
        case 0x1d1b318u: goto label_1d1b318;
        case 0x1d1b328u: goto label_1d1b328;
        case 0x1d1b340u: goto label_1d1b340;
        default: break;
    }

    ctx->pc = 0x1d1b220u;

    // 0x1d1b220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1b220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1b224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1b224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1b228: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d1b228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d1b22c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1b22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d1b230: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d1b230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b234: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d1b234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d1b238: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1B238u;
    SET_GPR_U32(ctx, 31, 0x1D1B240u);
    ctx->pc = 0x1D1B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B238u;
    // 0x1d1b23c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1B238u, 0x1D1B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B240u;
label_1d1b240:
    // 0x1d1b240: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d1b240u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d1b244: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D1B244u;
    {
        const bool branch_taken_0x1d1b244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B244u;
        // 0x1d1b248: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b244) {
            ctx->pc = 0x1D1B290u;
            goto label_1d1b290;
        }
    }
    ctx->pc = 0x1D1B24Cu;
    // 0x1d1b24c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1B24Cu;
    {
        const bool branch_taken_0x1d1b24c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d1b24c) {
            ctx->pc = 0x1D1B26Cu;
            goto label_1d1b26c;
        }
    }
    ctx->pc = 0x1D1B254u;
label_1d1b254:
    // 0x1d1b254: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d1b254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b258:
    // 0x1d1b258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1b258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1b25c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d1b25cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1b260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1b260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1b264: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1B264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B264u;
        // 0x1d1b268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1B26Cu;
label_1d1b26c:
    // 0x1d1b26c: 0xc746416  jal         func_1D19058
    ctx->pc = 0x1D1B26Cu;
    SET_GPR_U32(ctx, 31, 0x1D1B274u);
    ctx->pc = 0x1D1B270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B26Cu;
    // 0x1d1b270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19058u, 0x1D1B26Cu, 0x1D1B274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B274u;
label_1d1b274:
    // 0x1d1b274: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D1B274u;
    {
        const bool branch_taken_0x1d1b274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D1B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B274u;
        // 0x1d1b278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b274) {
            ctx->pc = 0x1D1B254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1b254;
        }
    }
    ctx->pc = 0x1D1B27Cu;
    // 0x1d1b27c: 0xc746418  jal         func_1D19060
    ctx->pc = 0x1D1B27Cu;
    SET_GPR_U32(ctx, 31, 0x1D1B284u);
    ctx->pc = 0x1D19060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19060u, 0x1D1B27Cu, 0x1D1B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B284u;
label_1d1b284:
    // 0x1d1b284: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D1B284u;
    {
        const bool branch_taken_0x1d1b284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B284u;
        // 0x1d1b288: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b284) {
            ctx->pc = 0x1D1B258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1b258;
        }
    }
    ctx->pc = 0x1D1B28Cu;
    // 0x1d1b28c: 0x0  nop
    ctx->pc = 0x1d1b28cu;
    // NOP
label_1d1b290:
    // 0x1d1b290: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d1b290u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d1b294: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D1B294u;
    {
        const bool branch_taken_0x1d1b294 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B294u;
        // 0x1d1b298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b294) {
            ctx->pc = 0x1D1B258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1b258;
        }
    }
    ctx->pc = 0x1D1B29Cu;
    // 0x1d1b29c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d1b29cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d1b2a0: 0x3c0e01d2  lui         $t6, 0x1D2
    ctx->pc = 0x1d1b2a0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)466 << 16));
    // 0x1d1b2a4: 0x25ce0730  addiu       $t6, $t6, 0x730
    ctx->pc = 0x1d1b2a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1840));
    // 0x1d1b2a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1b2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b2ac: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d1b2acu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d1b2b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1b2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b2b4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d1b2b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d1b2b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d1b2b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b2bc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d1b2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d1b2c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d1b2c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b2c4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d1b2c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b2c8: 0xc746426  jal         func_1D19098
    ctx->pc = 0x1D1B2C8u;
    SET_GPR_U32(ctx, 31, 0x1D1B2D0u);
    ctx->pc = 0x1D1B2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B2C8u;
    // 0x1d1b2cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19098u, 0x1D1B2C8u, 0x1D1B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B2D0u;
label_1d1b2d0:
    // 0x1d1b2d0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d1b2d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b2d4: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D1B2D4u;
    {
        const bool branch_taken_0x1d1b2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B2D4u;
        // 0x1d1b2d8: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b2d4) {
            ctx->pc = 0x1D1B254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1b254;
        }
    }
    ctx->pc = 0x1D1B2DCu;
    // 0x1d1b2dc: 0x0  nop
    ctx->pc = 0x1d1b2dcu;
    // NOP
    // 0x1d1b2e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1b2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1b2e4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d1b2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1b2e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1b2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1b2ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d1b2ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b2f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d1b2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d1b2f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d1b2f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b2f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1b2f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b2fc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d1b2fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b300: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d1b300u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b304: 0xc746426  jal         func_1D19098
    ctx->pc = 0x1D1B304u;
    SET_GPR_U32(ctx, 31, 0x1D1B30Cu);
    ctx->pc = 0x1D1B308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B304u;
    // 0x1d1b308: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19098u, 0x1D1B304u, 0x1D1B30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B30Cu;
label_1d1b30c:
    // 0x1d1b30c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1b30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b310: 0xc74641e  jal         func_1D19078
    ctx->pc = 0x1D1B310u;
    SET_GPR_U32(ctx, 31, 0x1D1B318u);
    ctx->pc = 0x1D1B314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B310u;
    // 0x1d1b314: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19078u, 0x1D1B310u, 0x1D1B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B318u;
label_1d1b318:
    // 0x1d1b318: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d1b318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1b31c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d1b31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d1b320: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1B320u;
    SET_GPR_U32(ctx, 31, 0x1D1B328u);
    ctx->pc = 0x1D1B324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B320u;
    // 0x1d1b324: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1B320u, 0x1D1B328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B328u;
label_1d1b328:
    // 0x1d1b328: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d1b328u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b32c: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d1b32cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d1b330: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d1b330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d1b334: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d1b334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1b338: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1B338u;
    SET_GPR_U32(ctx, 31, 0x1D1B340u);
    ctx->pc = 0x1D1B33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B338u;
    // 0x1d1b33c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1B338u, 0x1D1B340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B340u;
label_1d1b340:
    // 0x1d1b340: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d1b340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d1b344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1b344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1b348: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d1b348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1b34c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1B34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B34Cu;
        // 0x1d1b350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1B354u;
    // 0x1d1b354: 0x0  nop
    ctx->pc = 0x1d1b354u;
    // NOP
    ctx->pc = 0x1d1b358u;
}
