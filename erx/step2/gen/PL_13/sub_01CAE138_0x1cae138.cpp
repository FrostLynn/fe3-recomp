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

// Function: sub_01CAE138
// Address: 0x1cae138 - 0x1cae1d0
void sub_01CAE138_0x1cae138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAE138_0x1cae138");
#endif

    switch (ctx->pc) {
        case 0x1cae14cu: goto label_1cae14c;
        case 0x1cae160u: goto label_1cae160;
        case 0x1cae168u: goto label_1cae168;
        case 0x1cae16cu: goto label_1cae16c;
        case 0x1cae1b4u: goto label_1cae1b4;
        default: break;
    }

    ctx->pc = 0x1cae138u;

    // 0x1cae138: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cae138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cae13c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cae13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cae140: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cae140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cae144: 0xc72b448  jal         func_1CAD120
    ctx->pc = 0x1CAE144u;
    SET_GPR_U32(ctx, 31, 0x1CAE14Cu);
    ctx->pc = 0x1CAE148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE144u;
    // 0x1cae148: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD120u, 0x1CAE144u, 0x1CAE14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE14Cu;
label_1cae14c:
    // 0x1cae14c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cae14cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae150: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1CAE150u;
    {
        const bool branch_taken_0x1cae150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CAE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE150u;
        // 0x1cae154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae150) {
            ctx->pc = 0x1CAE17Cu;
            goto label_1cae17c;
        }
    }
    ctx->pc = 0x1CAE158u;
    // 0x1cae158: 0xc72b460  jal         func_1CAD180
    ctx->pc = 0x1CAE158u;
    SET_GPR_U32(ctx, 31, 0x1CAE160u);
    ctx->pc = 0x1CAD180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD180u, 0x1CAE158u, 0x1CAE160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE160u;
label_1cae160:
    // 0x1cae160: 0xc72b44a  jal         func_1CAD128
    ctx->pc = 0x1CAE160u;
    SET_GPR_U32(ctx, 31, 0x1CAE168u);
    ctx->pc = 0x1CAE164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE160u;
    // 0x1cae164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD128u, 0x1CAE160u, 0x1CAE168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE168u;
label_1cae168:
    // 0x1cae168: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cae168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cae16c:
    // 0x1cae16c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cae16cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae170: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cae170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cae174: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAE174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAE178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE174u;
        // 0x1cae178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAE174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAE17Cu;
label_1cae17c:
    // 0x1cae17c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CAE17Cu;
    {
        const bool branch_taken_0x1cae17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE17Cu;
        // 0x1cae180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae17c) {
            ctx->pc = 0x1CAE16Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cae16c;
        }
    }
    ctx->pc = 0x1CAE184u;
    // 0x1cae184: 0x0  nop
    ctx->pc = 0x1cae184u;
    // NOP
    // 0x1cae188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cae188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cae18c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cae18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae190: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cae190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cae194: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cae194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cae198: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cae198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cae19c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cae19cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae1a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cae1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae1a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cae1a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae1a8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cae1a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cae1ac: 0xc72b458  jal         func_1CAD160
    ctx->pc = 0x1CAE1ACu;
    SET_GPR_U32(ctx, 31, 0x1CAE1B4u);
    ctx->pc = 0x1CAE1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE1ACu;
    // 0x1cae1b0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD160u, 0x1CAE1ACu, 0x1CAE1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE1B4u;
label_1cae1b4:
    // 0x1cae1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae1b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cae1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cae1bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cae1bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae1c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cae1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cae1c4: 0x872b450  j           func_1CAD140
    ctx->pc = 0x1CAE1C4u;
    ctx->pc = 0x1CAE1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE1C4u;
    // 0x1cae1c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD140u;
    sub_01CAD140_0x1cad140(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAE1CCu;
    // 0x1cae1cc: 0x0  nop
    ctx->pc = 0x1cae1ccu;
    // NOP
    ctx->pc = 0x1cae1d0u;
}
