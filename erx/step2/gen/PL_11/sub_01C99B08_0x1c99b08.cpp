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

// Function: sub_01C99B08
// Address: 0x1c99b08 - 0x1c99b78
void sub_01C99B08_0x1c99b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C99B08_0x1c99b08");
#endif

    switch (ctx->pc) {
        case 0x1c99b2cu: goto label_1c99b2c;
        case 0x1c99b3cu: goto label_1c99b3c;
        case 0x1c99b48u: goto label_1c99b48;
        case 0x1c99b58u: goto label_1c99b58;
        default: break;
    }

    ctx->pc = 0x1c99b08u;

    // 0x1c99b08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c99b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c99b0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c99b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c99b10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c99b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c99b14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c99b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c99b18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c99b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99b1c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c99b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c99b20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c99b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99b24: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C99B24u;
    SET_GPR_U32(ctx, 31, 0x1C99B2Cu);
    ctx->pc = 0x1C99B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99B24u;
    // 0x1c99b28: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C99B24u, 0x1C99B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99B2Cu;
label_1c99b2c:
    // 0x1c99b2c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c99b2cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c99b30: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c99b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c99b34: 0xc726588  jal         func_1C99620
    ctx->pc = 0x1C99B34u;
    SET_GPR_U32(ctx, 31, 0x1C99B3Cu);
    ctx->pc = 0x1C99B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99B34u;
    // 0x1c99b38: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C99620u, 0x1C99B34u, 0x1C99B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99B3Cu;
label_1c99b3c:
    // 0x1c99b3c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c99b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c99b40: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C99B40u;
    SET_GPR_U32(ctx, 31, 0x1C99B48u);
    ctx->pc = 0x1C99B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99B40u;
    // 0x1c99b44: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C99B40u, 0x1C99B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99B48u;
label_1c99b48:
    // 0x1c99b48: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c99b48u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c99b4c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c99b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c99b50: 0xc726588  jal         func_1C99620
    ctx->pc = 0x1C99B50u;
    SET_GPR_U32(ctx, 31, 0x1C99B58u);
    ctx->pc = 0x1C99B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99B50u;
    // 0x1c99b54: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C99620u, 0x1C99B50u, 0x1C99B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99B58u;
label_1c99b58:
    // 0x1c99b58: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c99b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c99b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c99b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99b60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c99b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99b64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c99b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c99b68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c99b68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c99b6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c99b6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c99b70: 0x87262ea  j           func_1C98BA8
    ctx->pc = 0x1C99B70u;
    ctx->pc = 0x1C99B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99B70u;
    // 0x1c99b74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98BA8u;
    sub_01C98BA8_0x1c98ba8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C99B78u;
}
