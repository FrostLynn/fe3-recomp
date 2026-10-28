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

// Function: sub_01DA7E08
// Address: 0x1da7e08 - 0x1da7e78
void sub_01DA7E08_0x1da7e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7E08_0x1da7e08");
#endif

    switch (ctx->pc) {
        case 0x1da7e2cu: goto label_1da7e2c;
        case 0x1da7e3cu: goto label_1da7e3c;
        case 0x1da7e48u: goto label_1da7e48;
        case 0x1da7e58u: goto label_1da7e58;
        default: break;
    }

    ctx->pc = 0x1da7e08u;

    // 0x1da7e08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da7e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1da7e0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1da7e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1da7e10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1da7e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1da7e14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da7e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da7e18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1da7e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7e1c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1da7e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1da7e20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da7e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7e24: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA7E24u;
    SET_GPR_U32(ctx, 31, 0x1DA7E2Cu);
    ctx->pc = 0x1DA7E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7E24u;
    // 0x1da7e28: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA7E24u, 0x1DA7E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7E2Cu;
label_1da7e2c:
    // 0x1da7e2c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1da7e2cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1da7e30: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1da7e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1da7e34: 0xc769e48  jal         func_1DA7920
    ctx->pc = 0x1DA7E34u;
    SET_GPR_U32(ctx, 31, 0x1DA7E3Cu);
    ctx->pc = 0x1DA7E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7E34u;
    // 0x1da7e38: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA7920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA7920u, 0x1DA7E34u, 0x1DA7E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7E3Cu;
label_1da7e3c:
    // 0x1da7e3c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1da7e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1da7e40: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA7E40u;
    SET_GPR_U32(ctx, 31, 0x1DA7E48u);
    ctx->pc = 0x1DA7E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7E40u;
    // 0x1da7e44: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA7E40u, 0x1DA7E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7E48u;
label_1da7e48:
    // 0x1da7e48: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1da7e48u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1da7e4c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1da7e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1da7e50: 0xc769e48  jal         func_1DA7920
    ctx->pc = 0x1DA7E50u;
    SET_GPR_U32(ctx, 31, 0x1DA7E58u);
    ctx->pc = 0x1DA7E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7E50u;
    // 0x1da7e54: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA7920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA7920u, 0x1DA7E50u, 0x1DA7E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7E58u;
label_1da7e58:
    // 0x1da7e58: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1da7e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1da7e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da7e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7e60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1da7e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7e64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1da7e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da7e68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da7e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da7e6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da7e6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da7e70: 0x8769bac  j           func_1DA6EB0
    ctx->pc = 0x1DA7E70u;
    ctx->pc = 0x1DA7E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7E70u;
    // 0x1da7e74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6EB0u;
    sub_01DA6EB0_0x1da6eb0(rdram, ctx, runtime); return;
    ctx->pc = 0x1DA7E78u;
}
