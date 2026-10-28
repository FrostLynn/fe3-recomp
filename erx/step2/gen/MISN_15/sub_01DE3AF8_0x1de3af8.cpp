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

// Function: sub_01DE3AF8
// Address: 0x1de3af8 - 0x1de3b80
void sub_01DE3AF8_0x1de3af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE3AF8_0x1de3af8");
#endif

    switch (ctx->pc) {
        case 0x1de3b1cu: goto label_1de3b1c;
        case 0x1de3b30u: goto label_1de3b30;
        case 0x1de3b38u: goto label_1de3b38;
        case 0x1de3b50u: goto label_1de3b50;
        case 0x1de3b58u: goto label_1de3b58;
        default: break;
    }

    ctx->pc = 0x1de3af8u;

    // 0x1de3af8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de3af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de3afc: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de3afcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de3b00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de3b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de3b04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de3b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1de3b08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de3b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de3b0c: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de3b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de3b10: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1de3b10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1de3b14: 0xc778dc8  jal         func_1DE3720
    ctx->pc = 0x1DE3B14u;
    SET_GPR_U32(ctx, 31, 0x1DE3B1Cu);
    ctx->pc = 0x1DE3B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3B14u;
    // 0x1de3b18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3720u, 0x1DE3B14u, 0x1DE3B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3B1Cu;
label_1de3b1c:
    // 0x1de3b1c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de3b1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de3b20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1de3b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3b24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de3b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3b28: 0xc778dcc  jal         func_1DE3730
    ctx->pc = 0x1DE3B28u;
    SET_GPR_U32(ctx, 31, 0x1DE3B30u);
    ctx->pc = 0x1DE3B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3B28u;
    // 0x1de3b2c: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3730u, 0x1DE3B28u, 0x1DE3B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3B30u;
label_1de3b30:
    // 0x1de3b30: 0xc778e26  jal         func_1DE3898
    ctx->pc = 0x1DE3B30u;
    SET_GPR_U32(ctx, 31, 0x1DE3B38u);
    ctx->pc = 0x1DE3B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3B30u;
    // 0x1de3b34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3898u, 0x1DE3B30u, 0x1DE3B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3B38u;
label_1de3b38:
    // 0x1de3b38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE3B38u;
    {
        const bool branch_taken_0x1de3b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE3B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3B38u;
        // 0x1de3b3c: 0x8f8f8014  lw          $t7, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3b38) {
            ctx->pc = 0x1DE3B48u;
            goto label_1de3b48;
        }
    }
    ctx->pc = 0x1DE3B40u;
    // 0x1de3b40: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1de3b40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de3b44: 0xa1ee042a  sb          $t6, 0x42A($t7)
    ctx->pc = 0x1de3b44u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1066), (uint8_t)GPR_U32(ctx, 14));
label_1de3b48:
    // 0x1de3b48: 0xc778e7e  jal         func_1DE39F8
    ctx->pc = 0x1DE3B48u;
    SET_GPR_U32(ctx, 31, 0x1DE3B50u);
    ctx->pc = 0x1DE39F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE39F8u, 0x1DE3B48u, 0x1DE3B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3B50u;
label_1de3b50:
    // 0x1de3b50: 0xc778e7c  jal         func_1DE39F0
    ctx->pc = 0x1DE3B50u;
    SET_GPR_U32(ctx, 31, 0x1DE3B58u);
    ctx->pc = 0x1DE39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE39F0u, 0x1DE3B50u, 0x1DE3B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3B58u;
label_1de3b58:
    // 0x1de3b58: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1de3b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de3b5c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1de3b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1de3b60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de3b60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de3b64: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1de3b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1de3b68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de3b68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de3b6c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1de3b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de3b70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de3b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de3b74: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1de3b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1de3b78: 0x8778dd6  j           func_1DE3758
    ctx->pc = 0x1DE3B78u;
    ctx->pc = 0x1DE3B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3B78u;
    // 0x1de3b7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3758u;
    sub_01DE3758_0x1de3758(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE3B80u;
}
