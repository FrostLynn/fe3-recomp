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

// Function: sub_01DE39F8
// Address: 0x1de39f8 - 0x1de3a80
void sub_01DE39F8_0x1de39f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE39F8_0x1de39f8");
#endif

    switch (ctx->pc) {
        case 0x1de3a1cu: goto label_1de3a1c;
        case 0x1de3a30u: goto label_1de3a30;
        case 0x1de3a58u: goto label_1de3a58;
        default: break;
    }

    ctx->pc = 0x1de39f8u;

    // 0x1de39f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de39f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de39fc: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de39fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de3a00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de3a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de3a04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de3a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1de3a08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de3a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de3a0c: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de3a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de3a10: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1de3a10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1de3a14: 0xc778dc8  jal         func_1DE3720
    ctx->pc = 0x1DE3A14u;
    SET_GPR_U32(ctx, 31, 0x1DE3A1Cu);
    ctx->pc = 0x1DE3A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3A14u;
    // 0x1de3a18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3720u, 0x1DE3A14u, 0x1DE3A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3A1Cu;
label_1de3a1c:
    // 0x1de3a1c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de3a1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de3a20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1de3a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3a24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de3a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3a28: 0xc778dcc  jal         func_1DE3730
    ctx->pc = 0x1DE3A28u;
    SET_GPR_U32(ctx, 31, 0x1DE3A30u);
    ctx->pc = 0x1DE3A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3A28u;
    // 0x1de3a2c: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3730u, 0x1DE3A28u, 0x1DE3A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3A30u;
label_1de3a30:
    // 0x1de3a30: 0x8c4e03a4  lw          $t6, 0x3A4($v0)
    ctx->pc = 0x1de3a30u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x1de3a34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1de3a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3a38: 0x240f0064  addiu       $t7, $zero, 0x64
    ctx->pc = 0x1de3a38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1de3a3c: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE3A3Cu;
    {
        const bool branch_taken_0x1de3a3c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DE3A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3A3Cu;
        // 0x1de3a40: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3a3c) {
            ctx->pc = 0x1DE3A50u;
            goto label_1de3a50;
        }
    }
    ctx->pc = 0x1DE3A44u;
    // 0x1de3a44: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de3a44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de3a48: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1de3a48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de3a4c: 0xa1ee0428  sb          $t6, 0x428($t7)
    ctx->pc = 0x1de3a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1064), (uint8_t)GPR_U32(ctx, 14));
label_1de3a50:
    // 0x1de3a50: 0xc778e20  jal         func_1DE3880
    ctx->pc = 0x1DE3A50u;
    SET_GPR_U32(ctx, 31, 0x1DE3A58u);
    ctx->pc = 0x1DE3880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3880u, 0x1DE3A50u, 0x1DE3A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3A58u;
label_1de3a58:
    // 0x1de3a58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE3A58u;
    {
        const bool branch_taken_0x1de3a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3A58u;
        // 0x1de3a5c: 0x8f8f8014  lw          $t7, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3a58) {
            ctx->pc = 0x1DE3A68u;
            goto label_1de3a68;
        }
    }
    ctx->pc = 0x1DE3A60u;
    // 0x1de3a60: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1de3a60u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de3a64: 0xa1ee0429  sb          $t6, 0x429($t7)
    ctx->pc = 0x1de3a64u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1065), (uint8_t)GPR_U32(ctx, 14));
label_1de3a68:
    // 0x1de3a68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de3a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de3a6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de3a6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de3a70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de3a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de3a74: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE3A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE3A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3A74u;
        // 0x1de3a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE3A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE3A7Cu;
    // 0x1de3a7c: 0x0  nop
    ctx->pc = 0x1de3a7cu;
    // NOP
    ctx->pc = 0x1de3a80u;
}
