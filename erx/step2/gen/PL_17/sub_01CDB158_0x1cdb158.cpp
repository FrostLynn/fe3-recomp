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

// Function: sub_01CDB158
// Address: 0x1cdb158 - 0x1cdb220
void sub_01CDB158_0x1cdb158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDB158_0x1cdb158");
#endif

    switch (ctx->pc) {
        case 0x1cdb174u: goto label_1cdb174;
        case 0x1cdb184u: goto label_1cdb184;
        case 0x1cdb190u: goto label_1cdb190;
        case 0x1cdb1a0u: goto label_1cdb1a0;
        case 0x1cdb1b8u: goto label_1cdb1b8;
        case 0x1cdb1e4u: goto label_1cdb1e4;
        default: break;
    }

    ctx->pc = 0x1cdb158u;

    // 0x1cdb158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdb158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdb15c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cdb15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cdb160: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdb160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdb164: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cdb164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cdb168: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdb168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb16c: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDB16Cu;
    SET_GPR_U32(ctx, 31, 0x1CDB174u);
    ctx->pc = 0x1CDB170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB16Cu;
    // 0x1cdb170: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDB16Cu, 0x1CDB174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB174u;
label_1cdb174:
    // 0x1cdb174: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cdb174u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cdb178: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cdb178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cdb17c: 0xc736b4e  jal         func_1CDAD38
    ctx->pc = 0x1CDB17Cu;
    SET_GPR_U32(ctx, 31, 0x1CDB184u);
    ctx->pc = 0x1CDB180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB17Cu;
    // 0x1cdb180: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDAD38u, 0x1CDB17Cu, 0x1CDB184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB184u;
label_1cdb184:
    // 0x1cdb184: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cdb184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cdb188: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDB188u;
    SET_GPR_U32(ctx, 31, 0x1CDB190u);
    ctx->pc = 0x1CDB18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB188u;
    // 0x1cdb18c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDB188u, 0x1CDB190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB190u;
label_1cdb190:
    // 0x1cdb190: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cdb190u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cdb194: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cdb194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cdb198: 0xc736b4e  jal         func_1CDAD38
    ctx->pc = 0x1CDB198u;
    SET_GPR_U32(ctx, 31, 0x1CDB1A0u);
    ctx->pc = 0x1CDB19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB198u;
    // 0x1cdb19c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDAD38u, 0x1CDB198u, 0x1CDB1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB1A0u;
label_1cdb1a0:
    // 0x1cdb1a0: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1cdb1a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cdb1a4: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CDB1A4u;
    {
        const bool branch_taken_0x1cdb1a4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdb1a4) {
            ctx->pc = 0x1CDB1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDB1A4u;
            // 0x1cdb1a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDB20Cu;
            goto label_1cdb20c;
        }
    }
    ctx->pc = 0x1CDB1ACu;
    // 0x1cdb1ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cdb1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cdb1b0: 0xc7368a8  jal         func_1CDA2A0
    ctx->pc = 0x1CDB1B0u;
    SET_GPR_U32(ctx, 31, 0x1CDB1B8u);
    ctx->pc = 0x1CDB1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB1B0u;
    // 0x1cdb1b4: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA2A0u, 0x1CDB1B0u, 0x1CDB1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB1B8u;
label_1cdb1b8:
    // 0x1cdb1b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdb1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb1bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdb1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb1c0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cdb1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cdb1c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdb1c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb1c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdb1c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb1cc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cdb1ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdb1d0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1cdb1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1cdb1d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CDB1D4u;
    {
        const bool branch_taken_0x1cdb1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB1D4u;
        // 0x1cdb1d8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb1d4) {
            ctx->pc = 0x1CDB208u;
            goto label_1cdb208;
        }
    }
    ctx->pc = 0x1CDB1DCu;
    // 0x1cdb1dc: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDB1DCu;
    SET_GPR_U32(ctx, 31, 0x1CDB1E4u);
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDB1DCu, 0x1CDB1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB1E4u;
label_1cdb1e4:
    // 0x1cdb1e4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdb1e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdb1e8: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1cdb1e8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cdb1ec: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1cdb1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1cdb1f0: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1cdb1f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1cdb1f4: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1cdb1f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdb1f8: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDB1F8u;
    {
        const bool branch_taken_0x1cdb1f8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CDB1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB1F8u;
        // 0x1cdb1fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb1f8) {
            ctx->pc = 0x1CDB20Cu;
            goto label_1cdb20c;
        }
    }
    ctx->pc = 0x1CDB200u;
    // 0x1cdb200: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1cdb200u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cdb204: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1cdb204u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1cdb208:
    // 0x1cdb208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdb208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cdb20c:
    // 0x1cdb20c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cdb20cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb210: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdb210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdb214: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDB214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDB218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB214u;
        // 0x1cdb218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDB214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDB21Cu;
    // 0x1cdb21c: 0x0  nop
    ctx->pc = 0x1cdb21cu;
    // NOP
    ctx->pc = 0x1cdb220u;
}
