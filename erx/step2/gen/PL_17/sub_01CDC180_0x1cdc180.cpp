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

// Function: sub_01CDC180
// Address: 0x1cdc180 - 0x1cdc2a0
void sub_01CDC180_0x1cdc180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDC180_0x1cdc180");
#endif

    switch (ctx->pc) {
        case 0x1cdc1a0u: goto label_1cdc1a0;
        case 0x1cdc1b4u: goto label_1cdc1b4;
        case 0x1cdc1b8u: goto label_1cdc1b8;
        case 0x1cdc1d4u: goto label_1cdc1d4;
        case 0x1cdc1e4u: goto label_1cdc1e4;
        case 0x1cdc21cu: goto label_1cdc21c;
        case 0x1cdc254u: goto label_1cdc254;
        case 0x1cdc260u: goto label_1cdc260;
        case 0x1cdc270u: goto label_1cdc270;
        case 0x1cdc288u: goto label_1cdc288;
        default: break;
    }

    ctx->pc = 0x1cdc180u;

    // 0x1cdc180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdc180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdc184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdc184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdc188: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdc188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdc18c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdc18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cdc190: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cdc190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc194: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cdc194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cdc198: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDC198u;
    SET_GPR_U32(ctx, 31, 0x1CDC1A0u);
    ctx->pc = 0x1CDC19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC198u;
    // 0x1cdc19c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDC198u, 0x1CDC1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC1A0u;
label_1cdc1a0:
    // 0x1cdc1a0: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cdc1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cdc1a4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CDC1A4u;
    {
        const bool branch_taken_0x1cdc1a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC1A4u;
        // 0x1cdc1a8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc1a4) {
            ctx->pc = 0x1CDC1F0u;
            goto label_1cdc1f0;
        }
    }
    ctx->pc = 0x1CDC1ACu;
    // 0x1cdc1ac: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDC1ACu;
    {
        const bool branch_taken_0x1cdc1ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cdc1ac) {
            ctx->pc = 0x1CDC1CCu;
            goto label_1cdc1cc;
        }
    }
    ctx->pc = 0x1CDC1B4u;
label_1cdc1b4:
    // 0x1cdc1b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cdc1b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdc1b8:
    // 0x1cdc1b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdc1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdc1bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdc1bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdc1c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdc1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdc1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDC1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDC1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC1C4u;
        // 0x1cdc1c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDC1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDC1CCu;
label_1cdc1cc:
    // 0x1cdc1cc: 0xc736892  jal         func_1CDA248
    ctx->pc = 0x1CDC1CCu;
    SET_GPR_U32(ctx, 31, 0x1CDC1D4u);
    ctx->pc = 0x1CDC1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC1CCu;
    // 0x1cdc1d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA248u, 0x1CDC1CCu, 0x1CDC1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC1D4u;
label_1cdc1d4:
    // 0x1cdc1d4: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CDC1D4u;
    {
        const bool branch_taken_0x1cdc1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CDC1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC1D4u;
        // 0x1cdc1d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc1d4) {
            ctx->pc = 0x1CDC1B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc1b4;
        }
    }
    ctx->pc = 0x1CDC1DCu;
    // 0x1cdc1dc: 0xc736894  jal         func_1CDA250
    ctx->pc = 0x1CDC1DCu;
    SET_GPR_U32(ctx, 31, 0x1CDC1E4u);
    ctx->pc = 0x1CDA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA250u, 0x1CDC1DCu, 0x1CDC1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC1E4u;
label_1cdc1e4:
    // 0x1cdc1e4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CDC1E4u;
    {
        const bool branch_taken_0x1cdc1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC1E4u;
        // 0x1cdc1e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc1e4) {
            ctx->pc = 0x1CDC1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc1b8;
        }
    }
    ctx->pc = 0x1CDC1ECu;
    // 0x1cdc1ec: 0x0  nop
    ctx->pc = 0x1cdc1ecu;
    // NOP
label_1cdc1f0:
    // 0x1cdc1f0: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1cdc1f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1cdc1f4: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CDC1F4u;
    {
        const bool branch_taken_0x1cdc1f4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC1F4u;
        // 0x1cdc1f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc1f4) {
            ctx->pc = 0x1CDC1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc1b8;
        }
    }
    ctx->pc = 0x1CDC1FCu;
    // 0x1cdc1fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdc1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc200: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdc200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc204: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x1cdc204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1cdc208: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdc208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc20c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdc20cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc210: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cdc210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc214: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDC214u;
    SET_GPR_U32(ctx, 31, 0x1CDC21Cu);
    ctx->pc = 0x1CDC218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC214u;
    // 0x1cdc218: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDC214u, 0x1CDC21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC21Cu;
label_1cdc21c:
    // 0x1cdc21c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdc21cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc220: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1CDC220u;
    {
        const bool branch_taken_0x1cdc220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC220u;
        // 0x1cdc224: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc220) {
            ctx->pc = 0x1CDC1B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc1b4;
        }
    }
    ctx->pc = 0x1CDC228u;
    // 0x1cdc228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdc228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdc22c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cdc22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cdc230: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdc230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdc234: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdc234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc238: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cdc238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cdc23c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdc23cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc240: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdc240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc244: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cdc244u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc248: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cdc248u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc24c: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDC24Cu;
    SET_GPR_U32(ctx, 31, 0x1CDC254u);
    ctx->pc = 0x1CDC250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC24Cu;
    // 0x1cdc250: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDC24Cu, 0x1CDC254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC254u;
label_1cdc254:
    // 0x1cdc254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdc254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc258: 0xc73689a  jal         func_1CDA268
    ctx->pc = 0x1CDC258u;
    SET_GPR_U32(ctx, 31, 0x1CDC260u);
    ctx->pc = 0x1CDC25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC258u;
    // 0x1cdc25c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA268u, 0x1CDC258u, 0x1CDC260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC260u;
label_1cdc260:
    // 0x1cdc260: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cdc260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cdc264: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cdc264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cdc268: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDC268u;
    SET_GPR_U32(ctx, 31, 0x1CDC270u);
    ctx->pc = 0x1CDC26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC268u;
    // 0x1cdc26c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDC268u, 0x1CDC270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC270u;
label_1cdc270:
    // 0x1cdc270: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdc270u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc274: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cdc274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cdc278: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1cdc278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1cdc27c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cdc27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cdc280: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDC280u;
    SET_GPR_U32(ctx, 31, 0x1CDC288u);
    ctx->pc = 0x1CDC284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC280u;
    // 0x1cdc284: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDC280u, 0x1CDC288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC288u;
label_1cdc288:
    // 0x1cdc288: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cdc288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cdc28c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdc28cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdc290: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdc290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdc294: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDC294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDC298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC294u;
        // 0x1cdc298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDC294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDC29Cu;
    // 0x1cdc29c: 0x0  nop
    ctx->pc = 0x1cdc29cu;
    // NOP
    ctx->pc = 0x1cdc2a0u;
}
