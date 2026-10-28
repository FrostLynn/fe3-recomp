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

// Function: sub_01D51EF8
// Address: 0x1d51ef8 - 0x1d51f68
void sub_01D51EF8_0x1d51ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D51EF8_0x1d51ef8");
#endif

    switch (ctx->pc) {
        case 0x1d51f1cu: goto label_1d51f1c;
        case 0x1d51f2cu: goto label_1d51f2c;
        case 0x1d51f38u: goto label_1d51f38;
        case 0x1d51f48u: goto label_1d51f48;
        default: break;
    }

    ctx->pc = 0x1d51ef8u;

    // 0x1d51ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d51ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d51efc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d51efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d51f00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d51f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d51f04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d51f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d51f08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d51f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51f0c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d51f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d51f10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d51f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51f14: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D51F14u;
    SET_GPR_U32(ctx, 31, 0x1D51F1Cu);
    ctx->pc = 0x1D51F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51F14u;
    // 0x1d51f18: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D51F14u, 0x1D51F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51F1Cu;
label_1d51f1c:
    // 0x1d51f1c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d51f1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d51f20: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d51f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d51f24: 0xc754684  jal         func_1D51A10
    ctx->pc = 0x1D51F24u;
    SET_GPR_U32(ctx, 31, 0x1D51F2Cu);
    ctx->pc = 0x1D51F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51F24u;
    // 0x1d51f28: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51A10u, 0x1D51F24u, 0x1D51F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51F2Cu;
label_1d51f2c:
    // 0x1d51f2c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d51f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d51f30: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D51F30u;
    SET_GPR_U32(ctx, 31, 0x1D51F38u);
    ctx->pc = 0x1D51F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51F30u;
    // 0x1d51f34: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D51F30u, 0x1D51F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51F38u;
label_1d51f38:
    // 0x1d51f38: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d51f38u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d51f3c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d51f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d51f40: 0xc754684  jal         func_1D51A10
    ctx->pc = 0x1D51F40u;
    SET_GPR_U32(ctx, 31, 0x1D51F48u);
    ctx->pc = 0x1D51F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51F40u;
    // 0x1d51f44: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51A10u, 0x1D51F40u, 0x1D51F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51F48u;
label_1d51f48:
    // 0x1d51f48: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d51f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d51f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d51f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51f50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d51f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51f54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d51f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d51f58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d51f58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d51f5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d51f5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d51f60: 0x87543ea  j           func_1D50FA8
    ctx->pc = 0x1D51F60u;
    ctx->pc = 0x1D51F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51F60u;
    // 0x1d51f64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50FA8u;
    sub_01D50FA8_0x1d50fa8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D51F68u;
}
