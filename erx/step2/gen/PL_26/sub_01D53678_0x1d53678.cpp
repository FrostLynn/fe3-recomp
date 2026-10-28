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

// Function: sub_01D53678
// Address: 0x1d53678 - 0x1d536f0
void sub_01D53678_0x1d53678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D53678_0x1d53678");
#endif

    switch (ctx->pc) {
        case 0x1d53690u: goto label_1d53690;
        case 0x1d536a4u: goto label_1d536a4;
        case 0x1d536d4u: goto label_1d536d4;
        default: break;
    }

    ctx->pc = 0x1d53678u;

    // 0x1d53678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d53678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5367c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5367cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d53680: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d53680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d53684: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d53684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d53688: 0xc75465e  jal         func_1D51978
    ctx->pc = 0x1D53688u;
    SET_GPR_U32(ctx, 31, 0x1D53690u);
    ctx->pc = 0x1D5368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53688u;
    // 0x1d5368c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51978u, 0x1D53688u, 0x1D53690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53690u;
label_1d53690:
    // 0x1d53690: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D53690u;
    {
        const bool branch_taken_0x1d53690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53690u;
        // 0x1d53694: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53690) {
            ctx->pc = 0x1D536D4u;
            goto label_1d536d4;
        }
    }
    ctx->pc = 0x1D53698u;
    // 0x1d53698: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d53698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d5369c: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D5369Cu;
    SET_GPR_U32(ctx, 31, 0x1D536A4u);
    ctx->pc = 0x1D536A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5369Cu;
    // 0x1d536a0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D5369Cu, 0x1D536A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D536A4u;
label_1d536a4:
    // 0x1d536a4: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d536a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d536a8: 0x24440390  addiu       $a0, $v0, 0x390
    ctx->pc = 0x1d536a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
    // 0x1d536ac: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1d536acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1d536b0: 0x8dee4888  lw          $t6, 0x4888($t7)
    ctx->pc = 0x1d536b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18568)));
    // 0x1d536b4: 0x240f0027  addiu       $t7, $zero, 0x27
    ctx->pc = 0x1d536b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1d536b8: 0x11cf0004  beq         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D536B8u;
    {
        const bool branch_taken_0x1d536b8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D536BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D536B8u;
        // 0x1d536bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d536b8) {
            ctx->pc = 0x1D536CCu;
            goto label_1d536cc;
        }
    }
    ctx->pc = 0x1D536C0u;
    // 0x1d536c0: 0x240f002d  addiu       $t7, $zero, 0x2D
    ctx->pc = 0x1d536c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d536c4: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D536C4u;
    {
        const bool branch_taken_0x1d536c4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D536C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D536C4u;
        // 0x1d536c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d536c4) {
            ctx->pc = 0x1D536D8u;
            goto label_1d536d8;
        }
    }
    ctx->pc = 0x1D536CCu;
label_1d536cc:
    // 0x1d536cc: 0xc7543dc  jal         func_1D50F70
    ctx->pc = 0x1D536CCu;
    SET_GPR_U32(ctx, 31, 0x1D536D4u);
    ctx->pc = 0x1D50F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F70u, 0x1D536CCu, 0x1D536D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D536D4u;
label_1d536d4:
    // 0x1d536d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d536d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d536d8:
    // 0x1d536d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d536d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d536dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d536dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d536e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d536e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d536e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D536E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D536E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D536E4u;
        // 0x1d536e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D536E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D536ECu;
    // 0x1d536ec: 0x0  nop
    ctx->pc = 0x1d536ecu;
    // NOP
    ctx->pc = 0x1d536f0u;
}
