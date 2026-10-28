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

// Function: sub_01D3E250
// Address: 0x1d3e250 - 0x1d3e2b8
void sub_01D3E250_0x1d3e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3E250_0x1d3e250");
#endif

    switch (ctx->pc) {
        case 0x1d3e26cu: goto label_1d3e26c;
        case 0x1d3e27cu: goto label_1d3e27c;
        case 0x1d3e288u: goto label_1d3e288;
        case 0x1d3e298u: goto label_1d3e298;
        default: break;
    }

    ctx->pc = 0x1d3e250u;

    // 0x1d3e250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3e250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3e254: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d3e254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3e258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3e258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3e25c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d3e25cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d3e260: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3e260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e264: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3E264u;
    SET_GPR_U32(ctx, 31, 0x1D3E26Cu);
    ctx->pc = 0x1D3E268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E264u;
    // 0x1d3e268: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3E264u, 0x1D3E26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E26Cu;
label_1d3e26c:
    // 0x1d3e26c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d3e26cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d3e270: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d3e270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d3e274: 0xc74f1c4  jal         func_1D3C710
    ctx->pc = 0x1D3E274u;
    SET_GPR_U32(ctx, 31, 0x1D3E27Cu);
    ctx->pc = 0x1D3E278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E274u;
    // 0x1d3e278: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3C710u, 0x1D3E274u, 0x1D3E27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E27Cu;
label_1d3e27c:
    // 0x1d3e27c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d3e27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d3e280: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3E280u;
    SET_GPR_U32(ctx, 31, 0x1D3E288u);
    ctx->pc = 0x1D3E284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E280u;
    // 0x1d3e284: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3E280u, 0x1D3E288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E288u;
label_1d3e288:
    // 0x1d3e288: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d3e288u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d3e28c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d3e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d3e290: 0xc74f1c4  jal         func_1D3C710
    ctx->pc = 0x1D3E290u;
    SET_GPR_U32(ctx, 31, 0x1D3E298u);
    ctx->pc = 0x1D3E294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E290u;
    // 0x1d3e294: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3C710u, 0x1D3E290u, 0x1D3E298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E298u;
label_1d3e298:
    // 0x1d3e298: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d3e298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d3e29c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3e29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e2a0: 0x3c0501d4  lui         $a1, 0x1D4
    ctx->pc = 0x1d3e2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)468 << 16));
    // 0x1d3e2a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d3e2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3e2a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3e2a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3e2ac: 0x24a5ee80  addiu       $a1, $a1, -0x1180
    ctx->pc = 0x1d3e2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962816));
    // 0x1d3e2b0: 0x874ef2a  j           func_1D3BCA8
    ctx->pc = 0x1D3E2B0u;
    ctx->pc = 0x1D3E2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E2B0u;
    // 0x1d3e2b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BCA8u;
    sub_01D3BCA8_0x1d3bca8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3E2B8u;
}
